#include <stdio.h>
int main()
{ 
	int n,count = 0,sum=0;
	do
	{
		if(n%2==0){	
			count++;
			sum += n;
		}
		if(n==0){
			break;
		}
	}while(	scanf("%d",&n));
	printf("sum: %d;count: %d",sum,count-1);
	return 0;
}
