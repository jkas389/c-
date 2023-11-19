#include<bits/stdc++.h>
#include<math.h>
using namespace std;
string arr2[10]={" ","拾","百","千","万","拾","百","千","亿"};
string arr1[11]={"零","壹","贰","叁","肆","伍","陆","柒","捌","玖"};//sting字符串类型
int main(){
	int i=0;
	string a;
	cin>>a;//cin输入
	int ans=a.size();//判段字符串a的长度
	int ch[10];
	for(i=0;i<ans;i++){
		ch[i]=a[i]-48;//把字符串分解并转为数字
	}
	int i1=0;int j1=ans-1;
	while(i1<=ans||j1!=0){
		cout<<arr1[ch[i1++]]<<arr2[j1--];//cout输出
	}
	
	
	return 0;
}
