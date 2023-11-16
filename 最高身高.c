#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n][m];
	int i,j,x,y;
	int max = 0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]>max)
			{
				x=n+1;
				y=j+1;
				max = a[i][j];
			}
		}
	}
	printf("%d %d",x,y);
	return 0;
}
