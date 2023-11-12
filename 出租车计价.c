#include <stdio.h>
int main()
{
	double sum,m,i;
	int t,a,b;
	int	price1;
	int price2;
	a=price1;
	b=price2;
	scanf("%lf %d",&m,&t);
//	t=(float)t;
	if(m<=3)
		a = 10;
	else if(m<=10)
		a = 10+2*(m-3);
	else
		a = 10+20+(m-10);
//*3;
	b = t/5*2;
	sum = a+b;
	i=(sum*1)/1.0;
	printf("%.2f",i);
	return 0;
}
