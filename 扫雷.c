#define _CRT_SECURE_NO_WARNINGS 


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define  EASY_COUNT 10

void InitBoard(char  board[ROWS][COLS],int rows,int cols,char set);
void DisplayBoard(char board[ROWS][COLS],int row,int col);
void SetMie(char mine[ROWS][COLS],int row,int col);
void FindMie(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);	
//int get_mine_count(char mine[ROWS][COLS],int x,int y);
void expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);
int get_mine_count(char mine[ROWS][COLS],int x,int y);


void InitBoard(char  board[ROWS][COLS],int rows,int cols,char set){
	int i = 0;
	int j = 0;
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			board[i][j]=set;
			
		}
	}
}
void DisplayBoard(char board[ROWS][COLS],int row,int col){
	int i = 0;
	int j = 0; 
	for(i=0;i<=col;i++){
		printf("%d ",i);
	}
	printf("\n");
	for(i=1;i<=row;i++){
		printf("%d ",i);
		for(j=1;j<=col;j++){
			printf("%c ",board[i][j]);
			
		}
		printf("\n");
	}
}

void SetMie(char mine[ROWS][COLS],int row,int col){
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while(count){
		x = rand()%row+1;
		y = rand()%col+1;
		if(mine[x][y] == '0'){
			mine[x][y] ='1';
			count--;
		}
		
	}
}



void expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	//不满足显示条件的一律退出递归
	if (x == 0 || y == 0 || x == ROWS - 1 || y == COLS - 1)
		return;
	if (show[x][y] != '*')
		return;
	
	
	//递归实现展开功能
	int count = get_mine_count(mine, x, y);
	if (count > 0)
	{
		show[x][y] = count+'0';
	}
	else if (count == 0)
	{
		show[x][y] = '0';
		expand(mine, show, x-1, y);
		expand(mine, show, x-1, y-1);
		expand(mine, show, x, y-1);
		expand(mine, show, x+1, y-1);
		expand(mine, show, x+1, y);
		expand(mine, show, x+1, y+1);
		expand(mine, show, x, y+1);
		expand(mine, show, x-1, y+1);
		
	}
}

int get_mine_count(char mine[ROWS][COLS],int x,int y){
	return( mine[x-1][y]+
		mine[x-1][y-1]+
		mine[x][y-1]+
		mine[x+1][y+1]+
		mine[x+1][y]+
		mine[x+1][y+1]+
		mine[x][y+1]+
		mine[x-1][y+1]-8*'0');
	
}


void FindMie(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else if(mine[x][y]=='0')
			{	
				expand(mine,show,x,y);
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法，重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}
//主体
void menu(){
	printf("********************\n");
	printf("*******1.play*******\n");
	printf("*******0.exit*******\n");
	printf("********************\n");
	
}
void game(){
	char mine[ROWS][COLS]={0};
	char show[ROWS][COLS]={0};
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');

	SetMie(mine,ROW,COL);
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show,ROW,COL);	
	FindMie(mine,show,ROW,COL);	
}
//'0'-'0'=0

int main(){
	int input= 0 ;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	}while(input);
	return 0;
}
