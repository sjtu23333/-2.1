/*
题目描述
所谓“回文”是一种特殊的或者文字短语。它们无论是顺读还是倒读，结果都是一样。例如，以下的几个整数都是回文数：12321、77777、89998 和 4774。编写一个程序，读入一个整数(1位，3位或者是5位)后，判断它是否是回文数。

输入格式
输入一个整数

输出格式
一行，为要求解答

输入输出样例
测试输入：131
预期输出：
YES

测试输入：12345
预期输出：
N0
*/

//标答
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b,c,d,e;
    if(n<10)//讨论1位的情况
        cout<<"YES"<<endl;
    else
    {
        a=n;
        e=a%10; a=a/10;//将每一位分开
        d=a%10; a=a/10;
        c=a%10; a=a/10;
        b=a%10; a=a/10;
        if(n>100&&n<10000&&e==c)//讨论3位
            cout<<"YES"<<endl;
        else if(n>=10000&&e==a&&b==d)//讨论5位
            cout<<"YES"<<endl;
        else
            cout<<"N0"<<endl;
    }
    return 0;
}

//xzy的程序
#include <iostream>

using namespace std;

int main()
{
    int w,a,s,b;
    cin>>a;
    if(a<=9)//1位
        cout<<"YES";
    else if (a<=999){//3位

        w=a/100;
        s=a%10;
        if(w==s) cout<<"YES";//3位
        else cout<<"N0";
        }
    else{
        w=a/1000;
        s=a%100;
        b=w+s;
        if(b%11==0) cout<<"YES";//五位——这里有点问题，只是个必要条件
        else cout<<"N0";
        }

    return 0;
}
