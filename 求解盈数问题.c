#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<memory.h>
#define MAXN 4000000
int arr[MAXN+1];
int SUm(int n){
	memset(arr,0,sizeof(arr));
	arr[1]=0;
	int i=2,j;
	while(i<=n){
		arr[i]++;
		j=i+i;
		while(j<=n){
			arr[j]+=i;
			j+=i;
		}
		i++;
	}
}
int main(void)
{
	int n,i;
	int sum = 0;
	scanf("%d",&n);
	SUm(n);
	for(i=1;i<=n;i++)
	{
		if(arr[i]>i){
			if(sum){
				;
			}
			sum=1;
			printf("%d\n",i);
		}
	}
	return 0;
}



/*
  数组sum[]中存放除了自身之外的因子之和，例如sum[i]中存放除了i以外的i的因子之和。
 */
/*memset是c/c++中的函数 将s所指向的某一块内存中的后n个字节的内容全部设置为ch指向的
  ASCll值，第一个值为指定内存地址，快的大小由第三个参数指定，返回值为s*/
//思路可以用筛选法原理计算各个数的因子之和，然后在判定输出
