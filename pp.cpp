/*
题目描述
编写程序判断乒乓球比赛的结果：输入双方比分（两个非负整数），输出谁胜谁负，注意，输入的可能是一局比赛结束时的比分，也可能是比赛进行过程中的比分，还有可能是非法比分

编程要求
根据提示，在右侧编辑器补充代码，输入两个非负整数 a，b，使用一个空格分隔。根据输入的不同情况，输出”A win”, “B win”, “In progress”, “Illegal”

测试说明
测试输入：11 4
预期输出：
A win

测试输入：18 9
预期输出：
Illegal

保证比分<=100
*/


#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a<0||b<0)//比分非负
        cout<<"Illegal"<<endl;
    else if(a>=b)
    {
        if(a>11)//乒乓规则：加时超两分停
        {
            if(a-b>2)
                cout<<"Illegal"<<endl;
            else if(a-b==2)
                cout<<"A win"<<endl;
            else 
                cout<<"In progress"<<endl;
        }
        else if(a==11&&a-b==2)//常规
            cout<<"A win"<<endl;
        else
            cout<<"In progress"<<endl;
    }
    else if(b>a)//反过来再来一遍
    {
        if(b>11)
        {
            if(b-a>2)
                cout<<"Illegal"<<endl;
            else if(b-a==2)
                cout<<"B win"<<endl;
            else 
                cout<<"In progress"<<endl;
        }
        else if(b==11&&b-a==2)
            cout<<"B win"<<endl;
        else
            cout<<"In progress"<<endl;
    }
    return 0;
}