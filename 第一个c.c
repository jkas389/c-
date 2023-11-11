#define _CRT_SECURE_NO_WARNINGS //表述不提醒更改编译器自更警告

//int num2 = 20;//全局变量定义在代码块（{}）外的变量称之为全局变量
#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep头文件
#include<stdlib.h>//system头文件
#include<math.h>//数学头文件
//汉诺塔

//int main(){
//	char arr[] = "abcdef";
//
//	int i= 0;
//	int len = strlen(arr);
//	for(i=0;i<len;i++){
//		printf("%c",arr[i]);
//	}
//	
//	return 0;
//	
//}
//int main(){
//	char arr[] = {1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i= 0;
//	for(i=0;i<sz;i++){
//		printf("%d",arr[i]);
//	}
//	return 0;
//	
//}
//int main(){
//	char arr[][4]={{1,2,3},{4,5}};
//	int i=0;
//	for(i=0;i<3;i++){
//		int j=0;
//		for(j=0;j<4;j++){
//			printf("%d",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//	
//}
//int main(){
//	char arr[][4]={{1,2,3},{4,5}};
//	int i=0;
//	for(i=0;i<3;i++){
//		int j=0;
//		for(j=0;j<4;j++){
//			printf("%d",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//	
//}
//void bubble_sort(int arr[],int sz){
//	for(int i=0;i<sz-1;i++){
//		for(int j=0;j<sz-1-i;j++){
//			if(arr[j]>arr[j+1]){
//				int tmp = arr[j];
//				arr[j]=arr[j+1];//列体题一
//				arr[j+1]=tmp;
//			
//			}
//		}
//
//	}
//}
//int main(){
//	int arr[]={9,8,7,6,5,4,3,2,1,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for(int i=0;i<sz;i++){
//		printf("%d ",arr[i]);
//	}
//	
//	return 0;
//	
//}//冒泡排序
//void bubble_sort(int arr[],int sz){//实列二
//	//确定冒泡排序的趟数
//	for(int i=0;i<sz-1;i++){
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每趟冒泡排序
//		for(int j=0;j<sz-1-i;j++){
//			if(arr[j]>arr[j+1]){
//				int tmp = arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			
//			}
//		}
//		if(flag == 1){
//			break;
//		}
//
//	}
//}
//int main(){
//	int arr[]={9,8,7,6,5,4,3,2,1,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for(int i=0;i<sz;i++){
//		printf("%d ",arr[i]);
//	}
//}
//void test1(int arr[]){
//	printf("%d\n",sizeof(arr));
//}
//void test2(char ch[]){
//	printf("%d\n",sizeof(ch));
//}
//int main(){
//	int arr[10]={0};
//	char ch[10]={0};
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main(){
//	int  i=0,a=1,b=2,c=3,d=4;
////	i=a++&&++b&&d++;
//	i = a++||++b||d++;
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);
//	return 0;
//}
//int f(char c,char*s){
//	int m;
//	int n;
//	int h;
//	for(n=0,h=strlen(s);n<=h;){//h=8
//		//
//		m=(n+h)/2;//m=4
//		if(c<s[m])h=m-1;//长整型大于整形c所以执行h=m-1=3
//		else if(c>s[m])n=m+1;
//		else return m;
//		 
//	}
//	return -1;//退出执行返回-1
//}
//int main(void){
//	printf("%d\n",f('g',"abdgkmxy"));//将字符串长度8传上去
//	printf("%d\n",f('c',"BQMAXYZOTE"));//所以输出为3和-1
//	return 0;
//}
//#define n 10
//int main(){
//
//	int i,j,k;
//	for(i=1;i<=n;i++)//打印层数
//	{
//		for(k=i;k<n;k++)//从上往下打印每加一层空格减少
//		{
//			printf(" ");
//		}
//		for(j=1;j<2*i;j++)//打印十层每层*增加占用
//			{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i,j=0;
//	char a[]="how are you!";
//	for(i=0;a[i];i++)
//		if(a[i]!=' ')a[j++]=a[i];
//	a[j]='\0';
//	printf("%s\n",a);
//	return 0;
//}
//int my_strlen(char *str){
//	char*start=str;
//	char*end=str;
//	while(*end!='\0'){
//		end++;
//	}
//	return end-start;
//}
//int main(){
//	char arr[]="bite";
//	int len=my_strlen(arr);
//	printf("%d",len);
//	return 0;
//}
//int main(){
//	double c,f;
//	scanf("%lf",&f);
//	c = 5*(f-32)/9.0;
//	printf("c=%.2lf\n",c);
//	return 0;
//}
//int main(){
//	int a,b,c;
//	int max;
//	printf("输入数字:");
//	scanf("%d %d %d",&a,&b,&c);
//		if(a>b){
//			printf("%d",a);
//			
//		}
//		else if(b>c){
//			printf("%d",b);
//		}
//		else{
//			printf("%d",c);
//		}
//		
//	return 0;
//}
//int main() {
//	int n = 0, j, i, k, m, b;
//	
//	while (scanf("%d", &n)  != EOF) {
//		for (b = 0; b < n; b++) {
//			if (b < 2) {
//				for (i = 0; i <= b; i++) {
//					printf("* ");
//					//printf("\n");
//				}
//				printf("\n");
//			}
//		}
//		//printf("\n");
//		for (j = 0; j < n - 3; j++) {
//			printf("* ");
//			for (k = 0; k <= j; k++) {
//				printf("  ");
//			}
//			printf("* ");
//			printf("\n");
//		}
//		// printf("\n");
//		for (m = 0; m < n; m++) {
//			printf("* ");
//		}
//		
//	}
//	return 0;
//}
//int main()
//{
//	int n == 3;
//	while(scanf("%d", &n) != EOF)
//	{
//		for(int i=0; i<n; i++)  //外循环为行
//		{
//			for(int j=0; j<n; j++) //内循环为列
//			{
//				if(j==0||i==n-1||i==j)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n"); 
//		}
//	}
//}
//void reverse_string(char* arr){
//	char tmp = arr[0];
//	int len = strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if(strlen(arr+1)>=2){
//		reverse_string(arr+1);
//	}
//	arr[len-1] = tmp;
//}
//int main() {
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n",arr);
//	return 0;
//}
/*每位之和*/
//int DigitSum(unsigned int num){
//	if(num>9){
//		return DigitSum(num/10)+num%10;
//		
//	}
//	else{
//		return num;
//	}
//}
//int main(){
//	unsigned int num = 0;
//	scanf("%d",&num);
//	int ret = DigitSum(num);
//	printf("ret=%d\n",ret);
//	
//	return 0;
//	
//}
//次方计算
//double Pow(int n,int k){
//	if(k<0){
//		return (1.0/(Pow(n,-k)));
//	}
//	else if(k==0){
//		return 1;
//	}
//	else{
//		return n*Pow(n,k-1);
//	}
//}
//int main(){
//	int n=0;
//	int k=0;
//	scanf("%d%d",&n,&k);	
//	double ret = Pow(n,k);
//	printf("ret=%lf",ret);
//	return 0;
//}

//int main(){
////定义4个int类型的变量 
//	int hour1,minute1;
//	int hour2,minute2; 
////输入输出函数 
//	scanf("%d %d",&hour1,&minute1); 
//	scanf("%d %d",&hour2,&minute2); 
////将小时转换成分钟+原来的分钟 
//	int t1=hour1*60+minute1; 
//	int t2=hour2*60+minute2;  
////计算他们的分钟差 
//	int t=t2-t1;
////把计算出的分钟差除60得出它的小时，%取余60得出剩余多少分钟 
//	printf("时间差是：%d:%d",t/60,t%60) ;
//	return 0;
//}
//int main() {
//	// 请在此处编写代码
//	
//	int  hour1, minute1;
//	int hour, minute;
//	scanf("%d:%d", &hour1, & minute1);
//	int  hour2, minute2;	
//	scanf("%d:%d",&hour2, & minute2);
//	if (hour1 > hour2) {
//		hour = hour1 - hour2;
//		minute = minute1 - minute2;
//		if (minute > 0)
//			printf("%d:%d", hour, minute);
//		if (minute < 0)
//			printf("%d:%d", hour - 1, 60 + minute);
//		if (minute == 0)
//			printf("%d:%d", hour, 0);
//	}
//	if (hour1 == hour2) {
//		minute = minute1 - minute2;
//		if (minute == 0)
//			printf("%d:%d", 0, 0);
//		if (minute > 0)
//			printf("%d:%d", 0, minute);
//		
//	}
//	if (hour1 < hour2) {
//		hour = hour2 - hour1;
//		minute = minute1 - minute2;
//		if (minute == 0)
//			printf("%d:%d", hour, 0);
//		if (minute > 0)
//			printf("%d:%d", hour, minute);
//		if (minute < 0)
//			printf("%d:%d", hour - 1, 60 + minute);
//		
//	}
//	return 0;
//}
