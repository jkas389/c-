#include<stdio.h>
#include<string.h>
char anjian[11][6]= {"0 ","1,.?!","2ABC","3DEF","4GHI","5JKL","6MNO","7PQRS","8TUV","9WXYZ"};//此处如果用anjian[10][5]会出错
int main()
{
	char input[501]={0},output[501]= {0};
	int k=0;
	gets(input);
	int len=strlen(input);
	for(int i=0; i<len;)
	{
		int num,count=0,len2=0;
		if(input[i]>='0'&&input[i]<='9')
		{
			num=input[i]-'0';
			while(input[i]>='0'&&input[i]<='9')
			{
				count++;
				i ++;
			}
			len2=strlen(anjian[num]);
			count=count%len2;//存在count超出按键所存字母数量
			if(count==0)
				output[k++]=anjian[num][len2-1];
			else
				output[k++]=anjian[num][count-1];
		}
		else
			i++;
	}
	for(int i=0; i<k; i++)
		printf("%c",output[i]);
	printf("\n");
	return 0;
}
