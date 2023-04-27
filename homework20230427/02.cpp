#include<iostream>
using namespace std;
class solution
{
    friend int Max(int a,int b);
    public:
    solution(int A,int B)
    {
        a=A;
        b=B;
    }
    void Find();
    private:
    int a;
    int b;
};
int Max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
void solution::Find()
{
    int i;
    int max=1,min=a*b;
    for(i=1;i<=Max(a,b);i++)
    {
        if((a%i==0)&&(b%i==0)&&(i>max))
        max=i;
    }
    cout<<max<<endl;
    for(i=min;i>=Max(a,b);i--)
    {
        if((i%a==0)&&(i%b==0)&&(i<min))
        min=i;
    }
    cout<<min<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    solution s(a,b);
    s.Find();
    return 0;
}