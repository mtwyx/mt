#include<iostream>
using namespace std;
class solution
{
    public:
    solution(int A,int B)
    {
        a=A;
        b=B;
    }
    void Single(int y);
    int Check1();
    int Check2();
    int Check3();
    void count();
    private:
    int a;
    int b;
    int n;
    int x[10];
};
int zhishu(int y)
{
    int i;
    for(i=2;i<y;i++)
    {
        if(y%i==0)
        return 0;
    }
    return 1;
}
void solution::Single(int y)
{
    n=0;
    while(y>0)
    {
        x[n++]=y%10;
        y/=10;
    }
}
int solution::Check1()
{
    int sum=0;
    int i;
    for(i=0;i<n;i++)
    {
        sum+=x[i];
    }
    if(zhishu(sum)==1&&sum>=2)
    return 1;
    else
    return 0;

}
int solution::Check2()
{
    int pro=1;
    int i;
    for(i=0;i<n;i++)
    {
        pro*=x[i];
    }
    if(zhishu(pro)==1&&pro>=2)
    return 1;
    else
    return 0;
}
int solution::Check3()
{
    int squares_sum=0;
    int i;
    for(i=0;i<n;i++)
    {
        squares_sum+=x[i]*x[i];
    }
    if(zhishu(squares_sum)==1&&squares_sum>=2)
    return 1;
    else
    return 0;
}
void solution::count()
{
    int i;
    int count=0;
    for(i=a;i<=b;i++)
    {
        Single(i);
        if(Check1()==1&&Check2()==1&&Check3()==1)
        count++;
    }
    cout<<count;
}
int main()
{
    int a,b;
    cin>>a>>b;
    solution s(a,b);
    s.count();
    return 0;
}