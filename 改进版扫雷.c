#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep头文件
#include<stdlib.h>//system头文件
#include<math.h>//数学头文件
#include<time.h>
#include <iostream>

#define ROWS 11
#define COLS 11
#define ROW 9
#define COL 9
#define easy_mine 10
#define mid_mine 30
#define dif_mine 50
#define debug_mine 80
#define debug+_mine 0

void display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (j = 0; j < col + 1; j++)
	{
		printf("   %d", j);
	}
	printf("\n");
	printf("\n");
	for (i = 1; i < row + 1; i++)
	{
		printf("   %d", i);
		for (j = 1; j < col + 1; j++)
		{
			printf("  %c", board[i][j]);
		}
		printf("\n");
		printf("\n\n");
	}
}
int count_mine(char mine[ROWS][COLS], int i, int j)
{
	int a = 0;
	int b = 0;
	int count = 0;
	for (a = i  - 1; a <= i  + 1; a++)
	{
		for (b = j - 1; b <= j  + 1; b++)
		{
			if(mine[i][j]=='1')
				count++;
		}
	}
	return count;
}
int search_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col){
	int i = 0;
	int j = 0;
	int win = row*col;
	while (win> row * col - easy_mine)
	{
		again:
		printf("请输入坐标:>");
		scanf_s("%d %d", &i, &j);
		if (i > 0 && i < row + 1 && j>0 && j < col + 1 && show[i][j] == '?')
		{//坐标合法
			if (mine[i][j] == '1')
			{//排雷失败
				printf("很遗憾，你被炸死了！\n");
				display(mine, ROW, COL);
				break;
			}
			else
			{//排雷成功
				
				int count = count_mine(mine, i, j);
				show[i][j] = count + '0';
				display(show, ROW, COL);
				for (int m = 1; m < row+1 ; m++)//放在“扫雷”工作之后
				{
					for (int n = 1; n < col+1; n++)//从一开始
					{
						if (show[m][n] == '?')
							win--;
					}
				}
			}
			else if (show[i][j] != '?')
			{
				printf("输入非法，请重输\n");
				goto again;
			}
		}
		if (win == row * col - easy_mine)//
		{
			printf("你赢了！\n");
			return 1;
		}
	}
}
	void setmine(char board[ROWS][COLS], int row, int col)
	{
		int count = easy_mine;
		while(count>0)
		{
			again:
			int i = rand() % 9 + 1;
			int j = rand() % 9 + 1;
			if (board[i][j] == '0')
			{
				board[i][j] = '1';
			}
			else//如果没有else；if条件不满足；也会count--;
				goto again;
			count--;
		}
	}
	
	void inboard(char board[ROWS][COLS], int row, int col,char set)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < row+2; i++)
		{
			for (j = 0; j < col+2; j++)
			{
				board[i][j] = set;
			}
		}
	}
	void game()
	{char board1[ROWS][COLS] = { 0 };
		char board2[ROWS][COLS] = { 0 };
		inboard(board1, ROW, COL, '0');
		inboard(board2, ROW, COL, '?');
		display(board2, ROW, COL);
		setmine(board1, ROW, COL);
		while (1)
		{
			
			
			//display(board1, ROW, COL);//用于调试
			int r=  search_mine(board1, board2, ROW, COL);
			if (r == 1)
				break;
			
		}
	}
	void menu()
	{
		printf("*******************************\n");
		printf("*****  1. play  0. exit   *****\n");
		printf("*******************************\n");
	}
	void text()
	{
		int input = 0;
		do
		{
			menu();
			printf("请选择:>");
			scanf_s("%d", &input);
			system("cls");
			printf("扫雷\n");      
			switch (input)
			{
			case 1:
				printf("游戏开始\n");
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default :
				printf("输入非法，请重输！\n");
				break;
			}
			
		} while (input);
	}
	int main()
	{
		srand((unsigned int)time(NULL));
		text();
		return 0;
	}

