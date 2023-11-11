#define ROW 3
#define COL 3
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL],int row,int col);

char IsWin(char board[ROW][COL],int row,int col);
void menu(){
	printf("********************\n");
	printf("***1.play 0.exit****\n");
	printf("********************\n");
	
}
//游戏整体实现
void game(){
	char ret = 0;
	char board[ROW][COL]={0};
	InitBoard(board,ROW,COL);
	DisplayBoard(board,ROW,COL);
	while(1){
		PlayerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		ret = IsWin(board,ROW,COL);
		if(ret!='C'){
			break;
		}
		ComputerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		ret = IsWin(board,ROW,COL);
		if(ret !='C'){
			break;
		}
	
	}
	if(ret == '#'){
		printf("你输了\n");
	}
	else if(ret =='*'){
		printf("你赢了\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test(){
	int input=0;
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
}
void InitBoard(char board[ROW][COL],int row,int col)
{
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			board[i][j]=' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL],int row,int col)
{
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf(" %c ",board[i][j]);
			if(j<col-1){
				printf("|");
			}
		}
		printf("\n");
		if(i<row-1){
			for(int j=0;j<col;j++){
				printf("---");
				if(j<col-1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[ROW][COL],int row,int col){
	int x;
	int y;
	printf("玩家走:>\n");
	while(1){
		printf("请输入要下坐标\n");
		scanf("%d%d",&x,&y);
		if(x>0 && x<=row && y>0 && y<=col){
			if(board[x-1][y-1] ==' '){
				board[x-1][y-1]='*';
				break;
			}
			else
			{
				printf("该位置已有子\n");
			}
		}
		else{
			printf("坐标非法，请重新输入\n");
		}
		
	}
}
void ComputerMove(char board[ROW][COL],int row,int col){
	int x=0;
	int y=0;
	printf("人机走:>\n");
	while(1){
		x = rand()%ROW;
		y = rand()%COL;
		if(board[x][y]==' '){
			board[x][y] ='#';
			break;
		}
	}
	
	
}
int IsFull(char board[ROW][COL],int row,int col){
	int i=0;
	int j=0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(board[i][j]){
				return 0;
			}
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL],int row,int col){
	for(int i=0;i<row;i++){
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1] !=' ' ){
			return board[i][1];
		}
	}
	for(int i=0;i<ROW;i++){
		if(board[0][2]==board[i][1]&&board[i][1]==board[2][i]&&board[1][i] !=' '){
			return board[1][i];
		}
		
	}
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1] !=' '){
		return board[1][1];
	}
	if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[1][1] !=' '){
		return board[1][1];
	}
	if(1 ==IsFull(board,ROW,COL)){
		return 'q';
	}
	return 'C';
}
int main(){
	test();
	return 0;
}
