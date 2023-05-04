#include<iostream>
using namespace std;
class solution
{
    public:
    solution(int N,int K)
    {
        n=N;
        k=K;
    }
    void Input();
    void Count();
    void Judge();
    private:
    int n,k;
    int a[1000];
    int count;
};
int Check(int num)
{
    if(num>=0)
    return 1;
    else
    return 0;
}
void solution::Input()
{
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void solution::Count()
{
    int i;
    count=0;
    for(i=0;i<n;i++)
    {
        if(Check(a[i])==1)
        count++;
    }
    cout<<count<<endl;
}
void solution::Judge()
{
    if(count>=k)
    cout<<"No"<<endl;
    else
    cout<<"Yes"<<endl;
}
int main()
{
    int n,k;
    cin>>n>>k;
    solution s(n,k);
    s.Input();
    s.Count();
    s.Judge();
    return 0;
}