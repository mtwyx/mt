#include<iostream>
using namespace std;
class Sum
{
    friend int even(int x);
    public:
    void Input();
    void Count();
    private:
    int a[1000];
    int m;
    int sum;
};
int even(int x)
{
    if(x%2==0)
    return 1;
    else
    return 0;
}
void Sum::Input()
{
    int i=0;
    int num;
    while((cin>>num)&&(num>0))
    {
        a[i++]=num;
        
    }
    m=i;
}
void Sum::Count()
{
    sum=0;
    for(int i=0;i<m;i++)
    {
        if(even(a[i])==0)
        sum+=a[i];
    }
    cout<<sum<<endl;
}
int main()
{ 
    Sum s;
    s.Input();
    s.Count();
    return 0;
}