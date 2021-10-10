/*
题目描述
当助管的第一个活就是编写一个成绩转换程序，对于输入的成绩 n，转换规则如下：A档为 90-100，B 档是 80-89，C 档是 70-79，D 档是 60-69，F 档是 0-59。（请使用switch语句）

输入格式
输入描述：一个非负整数 n(0<=n<=100)。

输出格式
输出描述：对应的等级，一个字符 x ∈{A,B,C,D,F}。

输入输出样例
测试输入：85
预期输出：
B
*/

//简单的switch

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    switch (n/10)
    {
        case 10:
        case 9: cout<<'A'<<endl;break;
        case 8: cout<<'B'<<endl;break;
        case 7: cout<<'C'<<endl;break;
        case 6: cout<<'D'<<endl;break;
        default:cout<<'F'<<endl;
    }
    return 0;
}