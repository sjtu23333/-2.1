/*
题目描述
已知鸡和兔的总数量为n，腿的总数量为m，求鸡和兔的数量

输入格式
输入两个正整数n和m

输出格式
用一个空格分开，输出鸡和兔的数目

输入输出样例
测试输入：14 32
预期输出：
12 2
输出说明：鸡的数目为12，兔的数目为2

测试输入：10 16
预期输出：
no solution
输出说明：无解

题目保证n,m在int范围内
*/

//解析：数学题，解出来负数或者分数就结束

#include <iostream>
using namespace std;

int main()
{
    int n,m;
    long long x,y;
    cin>>n>>m;
    if(m%2!=0)
        cout<<"no solution"<<endl;
    else
    {
        x=2ll*n-m/2;
        y=1ll*m/2-n;
        if(x<0||y<0)
            cout<<"no solution"<<endl;
        else
            cout<<x<<' '<<y<<endl;
    }
    return 0;
}

//xzy的程序
#include <iostream>

using namespace std;

int main()
{
    int m , n , a , b;
    cin >> n >> m;
    a= 2 * n -0.5 * m;
    b=0.5 * m - n;
    if(m % 2 == 1)
        cout << "no solution" << endl;
    else if (a < 0 || b < 0)
        cout << "no solution" << endl;
    else
        cout << a << " "<< b << endl;
    return 0;
}
