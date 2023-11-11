#define _CRT_SECURE_NO_WARNINGS //表述不提醒更改编译器自更警告

//int num2 = 20;//全局变量定义在代码块（{}）外的变量称之为全局变量
#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep头文件
#include<stdlib.h>//system头文件
#include<math.h>//数学头文件
#include<stdbool.h>
#include<assert.h>
#include<bits.h>
#include<setjmp.h>
#include<mapi.h>
#include<quadmath.h>
typedef int STData;
typedef struct Stack
{
	int* a;
	int top;
	int capicty;
}ST;
void STInit(ST*ps);//初始化栈表
void STDestroy(ST* ps);//销毁栈表
void STpush(ST* ps,STData x);//压栈，在栈顶压入一个元素
void STpop(ST* ps);//出栈，在栈顶弹出一个元素。
STData STTop(ST* ps);//访问栈顶元素
int STSize(ST* ps);
int STEmpty(ST*ps);//
void STInit(ST* ps)//初始化栈表
{
	assert(ps);//判断结构体指针不为NULL；
	//一上来可以给栈表初始化容量
	ps->a = (STData*)malloc(sizeof(STData) * 4);
	if (ps->a == NULL)//判断是否开辟成功
	{
		perror("malloc");
	}
	//初始话容量为4
	ps->capicty = 4;
	ps->top = 0;//top=0 表示的是指向栈顶元素的下一个位置
	//top如果为-1，则表示栈顶元素的位置
}
void STDestroy(ST* ps)//销毁栈表
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capicty = 0;
	ps->top = 0;
	
}
void STpush(ST* ps, STData x)//压栈，在栈顶压入一个元素--在压入之前也要考虑是否需要增容
{
	assert(ps);//断言判断
	if (ps->top == ps->capicty)
	{
		//增容
		STData* tmp = (STData*)realloc(ps->a, sizeof(STData) * ps->capicty * 2);
		if (tmp == NULL)
		{
			perror("realloc");
		}
		ps->a = tmp;
		ps->capicty *= 2;
	}
	ps->a[ps->top] = x;//将元素压入栈顶，一开始top是0，当元素进去后，再让top指向该栈顶元素后一个位置
	ps->top++;
}
int STEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}

void STpop(ST* ps)//出栈，在栈顶弹出一个元素。
{
	assert(ps);
	//删除元素之前要检查栈表是否还有元素可删
	assert(!STEmpty(ps));//当栈表为NULL是断言
	ps->top--;
	
}
int STSize(ST* ps)//计算栈表长度
{
	assert(ps);
	return ps->top;
	//top的长度就是栈表的长度
}
STData STTop(ST* ps)//访问栈顶元素
{
	assert(ps);
	return ps->a[ps->top - 1];
}
typedef struct 
{  
	ST pushst;
	ST popst;
} MyQueue;


MyQueue* myQueueCreate() 
{
	MyQueue *q=(MyQueue*)malloc(sizeof(MyQueue));
	if(q==NULL)
	{
		perror("malloc");
	}
	STInit(&q->pushst);
	STInit(&q->popst);
	return q;
}

void myQueuePush(MyQueue* obj, int x) 
{
	//只管往pushst里插入即可，不需要管
	STpush(&obj->pushst,x);
}

int myQueuePop(MyQueue* obj) 
{
	//需要讨论下，当pop这个栈为空时，需要将push栈中的数据导过来
	if(STEmpty(&obj->popst))
	{
		while(!STEmpty(&obj->pushst))//将push栈中的所有数据都导过去即可
		{
			STpush(&obj->popst,STTop(&obj->pushst));
			STpop(&obj->pushst);
		}
	}
	//走到这里有两种情况，可能push栈里的数据导光了，也可能是pop栈里本来就有数据，不为空
	int top=STTop(&obj->popst);
	STpop(&obj->popst);
	return top;
}

int myQueuePeek(MyQueue* obj) 
{
	//这里跟pop数据很像,直接return 栈顶元素即可
	//需要讨论下，当pop这个栈为空时，需要将push栈中的数据导过来
	if(STEmpty(&obj->popst))
	{
		while(!STEmpty(&obj->pushst))//将push栈中的所有数据都导过去即可
		{
			STpush(&obj->popst,STTop(&obj->pushst));
			STpop(&obj->pushst);
		}
	}
	//走到这里有两种情况，可能push栈里的数据导光了，也可能是pop栈里本来就有数据，不为空
	return STTop(&obj->popst);
	
}

bool myQueueEmpty(MyQueue* obj) 
{
	return STEmpty(&obj->pushst)&&STEmpty(&obj->popst);
}

void myQueueFree(MyQueue* obj) 
{
	STDestroy(&obj->pushst);
	STDestroy(&obj->popst);
	free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
  
 * int param_2 = myQueuePop(obj);
  
 * int param_3 = myQueuePeek(obj);
  
 * bool param_4 = myQueueEmpty(obj);
  
 * myQueueFree(obj);
 */


