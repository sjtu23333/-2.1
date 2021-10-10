/*
题目描述
当你看到这道题时，相信你已经完成了第一次小作业的绝大多数题目。这些题目，可能迫使你爆肝到深夜，可能侵吞了你许多娱乐的时间，甚至破坏了你准备已久的假期安排。于是，怒发冲冠的你开始密谋针对助教组的复仇计划，但是，助教组也不是任人欺负的病猫，你对助教组的每一次攻击都会引起助教组不同程度的不满。为了使问题更有趣，设你一开始的仇恨值为n，助教组的不满值为0，你有两种复仇计划可供选择：

(1) 仇恨值减1，助教组的不满值加A.

(2) 仇恨值除以k(需整除)，助教租的不满值加B.(最多执行3次)

为了充分发泄你的情绪，你的最终仇恨值只能为0。而为了不过于得罪助教组，你想使助教组的不满值尽量小。

输入格式
四行，每行一个整数，分别表示n,k,A,B。
1≤n,k,A,B≤2×10 
9
 .

输出格式
一行一个整数表示在你最终仇恨值为0的情况下，助教组不满值的最小值。

输入输出样例
Sample Input 
19 19 19 1

Sample Output ·
20
*/

#include <iostream>
using namespace std;

int main()
{
    int n,k,a,b,tmp1;
    long long ans,tmp;
    cin>>n>>k>>a>>b;
    ans=1ll*n*a;
    tmp1=n%k;
    n=n/k;
    tmp=1ll*tmp1*a+b;
    ans=min(ans,tmp+1ll*n*a);//分别做了1和2，并算出来哪个合算
    tmp1=n%k;
    n=n/k;
    tmp+=1ll*tmp1*a+b;
    ans=min(ans,tmp+1ll*n*a);//做第二遍
    tmp1=n%k;
    n=n/k;
    tmp+=1ll*tmp1*a+b;
    ans=min(ans,tmp+1ll*n*a);//做第三遍
    cout<<ans<<endl;
    return 0;
}