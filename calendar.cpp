/*
题目描述
输入三个正整数month、day、year分别表示月、日、年。首先检验输入是否表示一个合法的日期，如果是合法日期则按以下步骤计算dayNum表示此日期为该年的第几天：1）dayNum=31(month-1)+day；2）二月以后的日期需要减去(4month+23)/10；3）如果是闰年则二月以后的日期需要再加1。假设输入总是正整数。

输入格式
输入三个正整数year、month、day，用空格分开。

输出一个正整数，表示此日期为该年的第几天，或者输出Illegal，表示不是一个合法的日期。(本题不得使用数组)

输出格式
测试输入：2020 9 20
预期输出：
264

测试输入：2100 2 29
预期输出：
Illegal
*/

#include <iostream>
using namespace std;

int main()
{
    int y,m,d,on1;
    cin>>y>>m>>d;
//先判定闰年，并且用on1做记号
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
                on1=1;
            else
                on1=0;
        }
        else
            on1=1;
    }
    else
        on1=0;
    if(m==2)
    {
        if(on1&&d>29)//闰年且2月日期
            cout<<"Illegal"<<endl;
        else if(on1==0&&d>28)//平年2月日期
            cout<<"Illegal"<<endl;
        else
            cout<<31*(m-1)+d<<endl;//累计天数
    }
    else if(m<8)
    {
        if(m%2==1&&d>31)//同样的
            cout<<"Illegal"<<endl;
        else if(m%2==0&&d>30)
            cout<<"Illegal"<<endl;
        else 
        {
            if(m>2)
                cout<<31*(m-1)+d-(4*m+23)/10+on1<<endl;//给好的算法
            else
                cout<<31*(m-1)+d<<endl;
        }
    }
    else if(m<=12)
    {
        if(m%2==0&&d>31)
            cout<<"Illegal"<<endl;//细节上的合法性
        else if(m%2==1&&d>30)
            cout<<"Illegal"<<endl;
        else 
        {
            if(m>2)
                cout<<31*(m-1)+d-(4*m+23)/10+on1<<endl;
            else
                cout<<31*(m-1)+d<<endl;
        }
    }
    else
        cout<<"Illegal"<<endl;
    return 0;
}

//xzy的程序
#include<iostream>
using namespace std;
int main(){
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int year,m,d,dn;
    cin>>year>>m>>d;
    if((year%4==0&&year%100!=0)||(year%400==0)){//判断闰年
        a[1] = 29;
        if(0<d&& d<=a[m-1] && m>0 && m<=12)
        {
                switch(m)//手算累加日期，比如五月就是前面四个月日期总和加上当月的天数
            {
                case 1: dn=0; break;
                case 2: dn=31; break;
                case 3: dn=60; break;
                case 4: dn=91; break;
                case 5: dn=121; break;
                case 6: dn=152; break;
                case 7: dn=182; break;
                case 8: dn=213; break;
                case 9: dn=244; break;
                case 10: dn=274; break;
                case 11: dn=305; break;
                case 12: dn=335; break;
            }
            dn=dn+d;
            cout<<dn<<endl;
        }
        else
            cout<<"Illegal"<<endl;//合法性判定
    }
    else{//再来一遍
        if(0<d&& d<=a[m-1] && 0<m && 12>=m)
         {
                switch(m)
            {
                case 1: dn=0; break;
                case 2: dn=31; break;
                case 3: dn=59; break;
                case 4: dn=90; break;
                case 5: dn=120; break;
                case 6: dn=151; break;
                case 7: dn=181; break;
                case 8: dn=212; break;
                case 9: dn=243; break;
                case 10: dn=273; break;
                case 11: dn=304; break;
                case 12: dn=334; break;
            }
            dn=dn+d;
            cout<<dn<<endl;
         }
        else
            cout<<"Illegal"<<endl;
    }

    return 0;
}

