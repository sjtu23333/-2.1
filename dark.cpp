/*
黄昏之时，昼夜交错，时空亦是。

在两个不同的n∗n时空里，泷和三叶分别位于(n,1)和(1,n)两个顶点处，他们约定在黄昏之时，一起到达(i,j)相会。

他们各自沿网格的行进路线是顺时针旋转的螺旋线。

 dark 

输入格式
一行三个整数n,i,j，分别代表网格的大小，相约的地点。

输出格式
一行输出泷和三叶各自需要行走的步数，空格分隔。

输入输出样例
测试输入：3 2 3
预期输出：
5 1

测试输入：8 3 6
预期输出：
54 48

样例范围
1≤n≤1000000
*/

/*
数学题
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iomanip>
using namespace std;
#define ll long long
 
inline int read()
{
	int x=0,f=1;
	char c=getchar();
	while(c>'9'||c<'0'){if(c=='-') f=-1;c=getchar();}
	while(c<='9'&&c>='0'){x=x*10+c-48;c=getchar();}
	return x*f;
}
 
ll n,x,y;
 
int main()
{
	ll cou=0;
	scanf("%lld %lld %lld",&n,&x,&y);
	int q=min(min(x,y),min(n+1-x,n+1-y));
	for(int i=1;i<q;i++)
		cou+=(n+2-i-i)*4ll-4;
	ll ans1=0,ans2=0;
	if(y==q)
		ans1=(n+1-q)-x+1+cou-1; 
	else if(x==q)
		ans1=(n+2-q-q)+y-q+cou-1;
	else if(y==n+1-q)
		ans1=(n+2-q-q)*2-1+x-q+cou-1;
	else if(x=n+1-q)
		ans1=(n+2-q-q)*3-2+(n+1-q)-y+cou-1;
		
	if(y==n+1-q)
		ans2=x-q+1+cou-1; 
	else if(x==n+1-q)
		ans2=(n+2-q-q)+(n+1-q)-y+cou-1;
	else if(y==q)
		ans2=(n+2-q-q)*2-1+(n+1-q)-x+cou-1;
	else if(x==q)
		ans2=(n+2-q-q)*3-2+y-q+cou-1;
	printf("%lld %lld\n",ans1,ans2);
	return 0;
}