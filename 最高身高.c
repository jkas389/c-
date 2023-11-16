#include <stdio.h>
int main()
{
	int n,m;
	int a[10][10];
	scanf("%d %d",&n,&m);
	int i,j;
	int max = 0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]>max)
			{
				max = a[i][j];
			}
		}
	}
	printf("%d %d",i,j);
	return 0;
}
