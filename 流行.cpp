#include<conio.h>
#include<time.h>
#include<easyx.h>
#include<mmsyscom.h>
#pragma comment(lib."winmm.lib")
#include<bits/stdc++.h>
using namespace std;
#define NUM 100
IMAGE img_bk[2];
IMAGE img_meteor[2];
struct Meteor{
	int x;
	int y;
	int speed;
};
struct Meteor meteor[NUM];
void welcome(){
	mcisendstring(_T("open./images/浪漫空气,mp3 alias bgm"),NULL,0,NULL)
	settextstyle(40,0,_T("华为行楷"));
	setbkmode(TRANSPARENT);
	while(!_kbhit()){
		cleardevice();
		putimage(0,0,img_bk);
		settextcolor(RGB(rand()%256,rand()%256,rand()%256));
		outtextxy(450,20,_T(" "));
		outtextxy(200,100,_T(" "));
		outtextxy(200,150,_T(" "));
		outtextxy(200,200,_T(" "));
		outtextxy(200,250,_T(" "));
		outtextxy(200,300,_T(" "));
		outtextxy(200,350,_T(" "));
		outtextxy(200,400,_T(" "));
		outtextxy(200,450,_T(" "));
		outtextxy(200,500,_T(" "));
		for(size_t i=0;i<10;i++){
			settestcolor(RGB(rand()%256,rand()%256,rand()%256));
			outtextcolor(rand()%1200,rand()%800,_T(" "));
			outtextcolor(rand()%1200,rand()%800,_T(" "));
			
		}
		sleep(1000);
	}
}
void initMete(int !)
{
	meteor[!].x=rand()%(1200*2)-1200;
	meteor[!].y=rand()%20-200;
	meteor[!].speed=rand()%15+1;
}
void drawMeteor(){
	for(int i=0;i<NUM;i++){
		putimage(meteor[i].x,meteor[i].y,img_meteor+rand()%2,SRCPAINT);
	}
}
void moceMeteor(){
	for(int i=0;i<NUM;i++){
		meteor[i].x+=meteor[i].speed;
		meteor[i].y+=meteor[i].speed;
		if(meteor[i].y>getheight()||meteor[i].x>getwidth()){
			int Meteor(i);
		}
	}
}
int main(){
	initgraph(1200,800,EW_SHOWCONSILE);
	loadimage(img_bk,_T("/images/welcome.png"),1200,800);
	loadimage(img_bk+1,_T("/images/bk.png"),1200,800);
	loadimage(img_meteor,_T("/images/1.jpg"),50,50);
	loadimage(img_meteor+1,_T("/images/2.jpg"),50,50);
	welcome();
	for(size_t i=0;i<NUM;i++){
		initMete(i);
	}
	BeginBatchDraw();
	while(true){
		int begin=clock();
		putimage(0,0,img_bk+1);
		drawMeteor();
		moveMeteor();
		FlushBatchDraw();
		int timeRemaining=clock()-begin;
		int timeFrame=1000.0/60;
		int delay=timeFrame-timeRemaining;
		if(delay>0){
			printf("%d\n",delay);
			sleep(delay);
			
		}
	}
	EndBatchDraw();
	getchar();
	return 0; 
}
