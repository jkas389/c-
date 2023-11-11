//#include<stdio.h>
//void praontN(int N);
//void praontN(int N){
//	if(N){
//		praontN(N-1);
//		printf("%d\n",N);
//	}
//	return;
//}
//int main(){
//	int N;
//	scanf("%d",&N);
//	praontN(N);
//	return 0;
//}
//#include <stdio.h>
//
//
//#define MAXN 10
//
//
//int Sum ( int List[], int N );
//
//
//int main ()
//
//{
//	
//	int List[MAXN], N, i;
//	
//	
//	scanf("%d", &N);
//	
//	for ( i=0; i<N; i++ )
//		
//		scanf("%d", &List[i]);
//	
//	printf("%d\n", Sum(List, N));
//	
//	
//	return 0;
//	
//}
//int Sum ( int List[], int N ){
//	int sum=0;
//	for(int i=0;i<N;i++){
//		sum+=List[i];
//	}
//	return sum;
//}
//#include <stdio.h>
//
//
//#define MAXN 10
//
//typedef float ElementType;
//
//
//ElementType Average( ElementType S[], int N );
//
//
//int main ()
//
//{
//	
//	ElementType S[MAXN];
//	
//	int N, i;
//	
//	
//	scanf("%d", &N);
//	
//	for ( i=0; i<N; i++ )
//		
//		scanf("%f", &S[i]);
//	
//	printf("%.2f\n", Average(S, N));
//	
//	
//	return 0;
//	
//}
//
//ElementType Average( ElementType S[], int N ){
//	int i;
//	double sum,ave;
//	for(i=0;i<N;i++){
//		sum+=[i];
//	}
//	ave=sum/N;
//	return ave;
//}
/*
  输出 X图形
  程序：输入行数，输出该X图形
 */

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int n = 0, i = 0, j = 0;
//	char arr[51][51] = { 0 };
//	scanf("%d", &n);
//	
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			arr[i][j] = ' ';
//		}
//	}
//	
//	for (i = 0; i < n; i++)
//	{
//		arr[i][i] = '*';
//		arr[i][n - i - 1] = '*';
//	}
//	
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//int main() 
//{int i,j,n;
//	scanf("%d",&n);
//	for(i=0;i<=n-1;i++)
//	{
//		for(j=0;j<i;j++)
//		printf(" ");
//		printf("*");
//		for(j=1;j<2*(n-i-1);j++)
//			printf(" ");
//		if(i<n-1)printf("*");
//		for(j=0;j<i;j++)
//			printf(" ");
//		printf("\n");
//	}
//	
//	for(i=n-1;i>0;i--)
//	{for(j=0;j<i-1;j++)
//		printf(" ");
//		printf("*");
//		for(j=0;j<2*(n-i)-1;j++)
//			printf(" ");
//		printf("*");
//		for(j=0;j<i-1;j++)
//			printf(" ");
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(){
//	//创建变量：
//	int n = 0; //输出的行数、正斜线、反斜线 的长度
//	//多组输入，打印 x图案：
//	while (scanf("%d", &n) == 1)
//		//使用 while循环 进行多组输入
//	{
//		//定义 行和列：
//		int i = 0; //行
//		int j = 0; //列
//		
//		//使用 for循环 循环打印行：
//		for (i = 0; i < n; i++){
//			//内嵌for循环 循环打印列：
//			for (j = 0; j < n; j++){
//				//当 行等于列 或 行+列=行数-1 时打印 *号：
//				if (i == j || (i+j == n-1))
//					//i == j：x图像的正斜线
//					//i+j == n-1：x图像的反斜线
//				{
//					printf("*"); //打印 *号
//				}
//				else
//				{
//					printf(" "); //打印空格
//				}
//			}
//			//打印完一列后换行：
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int day, month, year, sum=0, leap;            //定义日、月、年、总天数、闰年参数
//	printf("请输入年、月、日，格式为：年 月 日\n");
//	scanf("%d %d %d", &year, &month, &day);       //输入年，，月，日
//	switch (month)                               // 根据月份确定之前月份的总天数
//	{
//		case 1:sum = 0; break;
//		case 2:sum = 31; break;
//		case 3:sum = 59; break;
//		case 4:sum = 90; break;
//		case 5:sum = 120; break;
//		case 6:sum = 151; break;
//		case 7:sum = 181; break;
//		case 8:sum = 212; break;
//		case 9:sum = 243; break;
//		case 10:sum = 273; break;
//		case 11:sum = 304; break;
//		case 12:sum = 334; break;
//		default:printf("data error"); break;
//	}
//	sum += day;                          // 加上当前月份的天数
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))  // 判断是否为闰年
//		leap = 1;
//	else 
//		leap = 0;
//	
//	if (leap == 1 && month > 2)  //若是闰年且月份大于2,总天数应该加一天
//		sum++;
//	
//	printf("这一天是这一年的第 %d 天。\n", sum);
//	
//	return 0;
//}
////#define _CRT_SECURE_NO_WARNINGS //防报错
//#include <stdio.h>
//#include <stdlib.h>
//
//int Days_M(int year, int month) //该函数用于获得当月月份的对应天数
//{
//	int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//	if(month==2){
//		printf("%d",29);
//	}
//	else{
//		printf("%d",day[month]);
//	}
//}
//
//int Days_SUM(int year, int month, int day) //该函数用于获得总天数
//{
//	int SUM = 0;
//	if (year < 1) //年数报错
//		return -1;
//	if (month < 1 || month > 13) //月数报错
//		return -2;
//	if (day < 1 || day > Days_M(year, month)) //天数报错
//		return -3;
//	for (int i = 1; i <=month; i++) //直到当月跳出循环（若int i=1会导致一月也进行一次循环）
//		if(i!=1){
//			SUM += Days_M(year, i); //获得本月以前的所有月份天数之和
//			return SUM + day; //返回值中加上本月当前天数
//		}
//		else{
//			return day;
//		}  
//}
//
//int main()
//{
//	int year, month, day;
//	int SUM = 0;
//	printf("请输入年月日（用空格隔开）：\n");
//	scanf_s("%d %d %d", &year, &month, &day);
////	SUM = Days_SUM(year, month, day); 
//	switch (SUM)
//	{
//	case -1:
//		printf("年份输入错误");
//		break;
//	case -2:
//		printf("月份输入错误");
//		break;
//	case -3:
//		printf("日子输入错误");
//		break;
//	default:
//		printf("%d年%d月%d日是这一年的第%d天！", year, month, day, Days_SUM(year, month, day));
//		break;
//	}
////	int year,month;
////	scanf("%d%d",&year,&month);
////	Days_M(year,month);
//	
//	return 0;
//}
//
//#include <stdio.h>
//#include <math.h>
//int is_prime(int n){//素数部分
//	if(n<2){
//		return 0;
//	}
//	for(int  i=2;i*i<=n;i++){
//		if(n%i==0){
//			return 0;	
//		}
//	}
//	return 1;
//}
//int stp_f(int n){
//	if(n/10<10){
//		if(n/10==n%10){
//			return 1;
//		}
//		else{
//			return 0;
//		}
//		if(n/10>=10&&n/10<100){
//			if(n/100==n%10){
//				return 1;
//			}
//			else{
//				return 0;
//			}
//		}
//	}
//}
//int main()
//{
//	int i,x,m = 0;
//	scanf("%d",&x);
//	for(i=11;i<=x;i++){
//		if(stp_f(i)&&is_prime(i))m+=1;
//	}
//	printf("%d",m);
//	return 0;
//}
//#include<stdio.h>
//int main(){
//	
//	
//	return 0;
//}
//#include<stdio.h>
//void sc(char n){
//	int xx=(int)n;//小写数字
//	int dx=xx-97;//相差个数
//	int zh=90-dx;
//	printf("%c",(int)zh);//转大写
//}
//int main(){
//	char zf;
//	scanf("%c",&zf);
//	sc(zf);
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int weishu(int n) {
//	int i;
//	int a[i] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
//	'a'== 10;
//	'b'== 11;
//	'c'== 12;
//	'd'== 13;
//	'e'== 14;
//	'f'== 15;
//	'g'== 16;
//	int count;
//	while (n > 0) {
//		int count = 0;
//		n /= 10;
//		count++;
//	}
//	return count;
//}
//
//void ret(int n) {
//	int i;
//	int count = weishu(n);
//	//for(i=0;i<count;i++)
//	//{ int retu = pow(16,count-i);}
//	int retu;
//	while (n > 0) {
//		int k = count;
//		int j = n % 10;
//		n /= 10;
//		int retu = j * pow(16, count - k);
//		k--;
//	}
//	printf("%d", retu);
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	ret(n);
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//#include <stdbool.h>
//bool is_prime(int n)
//{
//	int i;
//	if(n==2)
//		return true;
//	for(i=2;i<n;i++)
//	{
//		if(n%i==0)
//		{
//			return false;
//		}
//		else
//			return true;
//		break;
//	}     
//} 
//int main () 
//{
//	// 请在此处编写代码，完成题目要求
//	int num,i;
//	scanf("%d",&num);
//	int ret = is_prime(num);
//	if(ret)
//	{
//		
//		for(i=2;i<=num;i++)
//		{
//			if(is_prime(i))
//				printf("%d\n",i);
//		}   
//	}   
//	return 0;
//}
//#include<stdio.h>
//int main(){
//	float number1,number2,jg;
//	char operator;
//	scanf("%lf %c %lf",&number1,&operator,&number2);
//	switch (operator) {
//	case '+':jg=number1+number2;break;
//	case '-':jg=number1-number2;break;
//	case '*':jg=number1*number2;break;
//	case '/':jg=number1/number2;break;
//	}
//	if(jg==0){
//		printf("The divsior is 0");
//	}
//	else if(jg/(int)jg==1){
//		printf("%d",(int)jg);
//	}
//	else{
//		printf("%.2lf",jg);
//	}
//	return 0;
//	
//}

//#include<stdio.h>
//int main(){
//	float number1,number2;
//	char operator;
//	scanf("%f %c %f",&number1,&operator,&number2);
//	switch (operator) {
//	case '+':
//		printf("%f",number1+number2);
//		break;
//	case '-':
//		printf("%f",number1-number2);
//		break;
//	case '*':
//		printf("%f",number1*number2);
//		break;
//	case '/':
//		if(number2==0){
//			printf("The divsior is 0");
//		}
//		else{
//			printf("%f",number1/number2);
//		};
//		break;
//	}
//	
//	return 0;
//	
//}
//单链表结点的阶乘
#define _CRT_SECURE_NO_WARNINGS //表述不提醒更改编译器自更警告

//int num2 = 20;//全局变量定义在代码块（{}）外的变量称之为全局变量
#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep头文件
#include<stdlib.h>//system头文件
#include<math.h>//数学头文件
//typedef struct Node *PtrToNode;
//struct Node {
//	int Data; /* 存储结点数据 */
//	PtrToNode Next; /* 指向下一个结点的指针 */
//};
//typedef PtrToNode List; /* 定义单链表类型 */
//int FactorialSum(List L ){
//	int i,s=1,ss=0;
//	while(L!=NULL){
//		for(i=L->Data;i>0;i--){
//			s*=i;
//			
//		}
//		ss+=s;
//		L=L->Next;
//		s=1;
//	}
//	return ss;
//}
//int main(){
//	int N, i;
//	List L, p;
//	scanf("%d", &N);
//	L = NULL;
//	for ( i=0; i<N; i++ ) {
//		
//		p = (List)malloc(sizeof(struct Node));
//		
//		scanf("%d", &p->Data);
//		
//		p->Next = L;  L = p;
//	}
//	printf("%d\n", FactorialSum(L));
//	return 0;
//	
//}
//统计某类完全平方数
//
//int IsTheNumber ( const int N ){
//	int k,p,n=N;
//	int flat=0;
//	int arr[10]={0};
//	k=sqrt(N);//平方数
//	if(k*k!=N){
//		return 0;
//	}
//	else{
//		while(n){
//			p=n%10;
//			arr[p]++;
//			n/=10;
//		}
//		for(int i=0;i<10;i++){
//			if(arr[i]>=2){
//				flat=1;
//			}
//		}
//		if(flat){
//			return 1;
//		}
//		else{
//		return 0;
//		}
//	}
//}
//
//int main()
//{
//	int n1, n2, i, cnt;
//	
//	scanf("%d %d", &n1, &n2);
//	cnt = 0;
//	for ( i=n1; i<=n2; i++ ) {
//		if ( IsTheNumber(i) )
//			cnt++;
//	}
//	printf("cnt = %d\n", cnt);
//	
//	return 0;
//}

//阶乘
//int Factorial( const int N ){
//	int i = 0;
//	int ret = 1;
//	if(N<0)
//		return 0;
//	for(i=1;i<=N;i++){
//		ret *= i;
//	}
//	return ret;	
//}
//
//int main()
//{
//	int N, NF;
//	
//	scanf("%d", &N);
//	NF = Factorial(N);
//	if (NF)  printf("%d! = %d\n", N, NF);
//	else printf("Invalid input\n");
//	
//	return 0;
//}
//统计个位数字
//int Count_Digit ( const int N, const int D ){
//	int NUM;
//	if(N<0||N>0){
//		if(N>0){
//			NUM=N;
//			
//		}
//		else{
//			NUM=-N;
//		}
//	}
//	int count=0;
//	while(NUM){
//		if(NUM%10==D){
//			++count;
//			
//		}
//		NUM/=10;
//	}
//	return count;
//}
//int main()
//{
//	int N, D;
//	
//	scanf("%d %d", &N, &D);
//	printf("%d\n", Count_Digit(N, D));
//	return 0;
//}
//阶乘升级版
//void Print_Factorial ( const int N )
//{
//	if(N<0)
//	{
//		printf("Invalid input");
//	}
//	else
//	{
//		int num[3000]={0},j,n=N; 
//		num[0]=1;
//		int l =0;
//		int k =0;
//		for(int i=2;i<=n;i++)
//		{
//			for(j=0;j<=l;j++)
//			{
//				int tmp = num[j]*i+k;
//				num[j] = tmp%10;
//				k = tmp/10;
//			}
//			while(k)
//			{
//				num[j++]=k%10;
//				k/=10;
//				l++;
//			}
//		}
//		for(;l>=0;l--)
//		{
//			printf("%d",num[l]);
//		}
//	}
//}
//int main ()
//{
//	int N;
//	scanf("%d",&N);
//	Print_Factorial(N);
//	return 0;
//}
//int main () {
//	/******** begin *******/
//	float x, y;
//	scanf("%f %f", &x, &y);
//	float m;
//	float a = 1, b = 4;
//	m = (x * x) / (a * a) + (y * y) / (b * b);
//	if (m == 1){
//		printf("On the ellipse");
//	}
//	else if (m > 1){
//		printf("Outside the ellipse");
//	}
//	else{
//		printf("Within the ellipse");	
//	}
//	
//	
//	/******** end *******/
//	return 0;
//}
int main()
{
	char n,i;
	scanf("%c",&n);
	getchar();
//scanf("%c",&j);的问题，第二次是读入的一个换行符，而不是输入的字符，因此需要加一个getchar() 吃掉换行符
	switch(n)
	{
		case 'm':
		printf("monday\n");
		break;
		case 'w':
		printf("wednesday\n");
		break;
		case 'f':
		printf("friday\n");
		break;
		case 't':
		scanf("%c",&i);
		if(i=='u')
			printf("tuesday\n");
		break;
		if(i=='h')
			printf("thursday\n");
		break;
		case's':scanf("%c",&i);
		if(i=='a')
			printf("saturday\n");break;
		if(i=='u')
			printf("sunday\n");break;
	default:
		printf("error");
		break;
	}
	return 0;
}

