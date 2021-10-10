/*
题目背景与描述
终于到了国庆了，小V开心的在思源湖上开船，他上午开150公里，下午开100公里，晚上和周末都休息（实行双休日)，假设从周x(1<=x<=7)开始算起，请问这样过了n天以后，小V一共累计划了多少公里呢？

输入格式
输入两个整数x,n(表示从周x算起，经过n天，n在long int范围内）。

输出格式
输出一个整数，表示总共划了多少公里。

输入输出样例
Sample Input
3 10
Sample Output
2000
*/
//解析：关键在于判定休息的日期
#include <iostream>
using namespace std;

int main()
{
    int x,n;
    cin>>x>>n;
    int a,b;
    long long ans;
    a=n/7;//算过了几个礼拜
    b=n%7;//几个礼拜剩下多少天
    ans=5ll*a*250;//一整周一处理
//接下来处理剩下的日期，标答分成周一到周五、周六、周日三种情况
    if(x<=5)
    {
        if(x+b-1<=5)//去掉完整周，结束时候是第几天，判定是否牵涉休息
            ans+=b*250;
        else if(x+b-1<=7)//有没有过礼拜天，判定休息天数
            ans+=(b-(x+b-1-5))*250;
        else//过了礼拜天一定休息两天
            ans+=(b-2)*250;
    }
    else
    {
        if(x+b-1>7)
            ans+=(b-2)*250;
    }
    cout<<ans<<endl;
    return 0;
}
//xzy的程序

#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c,d,e,f;
    cin >> a >> b ;
    c = b / 7;//拆出来完整的周
    d = b % 7;//剩下的日期
    e=a+d-1;//结束后礼拜几
    if (a!=7)//第一天休息拆出来
    {
	//分别拆出休息一天、两天、不休息
        if (e==6)
            f=c*5*250+(d-1)*250;
        else if (e>=7)
            f=c*5*250+(d-2)*250;
        else
            f=c*5*250+d*250;
    }
    else
    {
        if (e==6)//剩下最多六天，讨论剩下情况
            f=c*5*250+(d)*250;
        else
            f=c*5*250+(d-1)*250;
    }


    cout << f << endl;
    return 0;
}