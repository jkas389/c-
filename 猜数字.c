
#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep头文件
#include<stdlib.h>//system头文件
#include<math.h>//数学头文件
#include<time.h>
#include<stdlib.h>//rand的头文件
void menu(){
	printf("*********************\n");
	printf("****1.play 0.exit****\n");
	printf("*********************\n");
}
//RAND_MAX-32767
void game(){
	int ret = 0;
	int guess = 0;
	//插入一个函数time_t
	//拿时间戳来设置
	//生成一个随机数
	ret = rand()%100+1;//生成1-100之间的随机数
	//printf("%d\n",ret);
	while(1){
		scanf("%d",&guess);
		printf("请猜数字:>");
		if(guess>ret){
			printf("猜大了\n");
			
		}
		else if(guess<ret){
			printf("猜小了\n");
		}
		else{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main(){
	int INPUT = 0;
	srand((unsigned int)time(NULL));
	do{
		
		menu();
		printf("请输入你的猜测>:");
		scanf("%d",&INPUT);
		switch (INPUT) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}while(INPUT);
    return 0;
}
 
