#include<iostream>
using namespace std;
class solution
{
    public:
    solution(int M,int K)
    {
        m=M;
        k=K;
    }
    void Palin();
    void Print();

    private:
    int j;
    int m,k;
    int x[100];
};
int Check(int n)
{
    int a[100],i=0;
    while(n>0)
    {
        a[i++]=n%10;
        n/=10;
    }
    for(int j=0,k=i-1;j<k;j++,k--)
    {
        if(a[j]!=a[k])
        return 0;
    }
    return 1;
}
void solution::Palin()
{
    j=0;
    for(int i=m+1;;i++)
    {
        if(Check(i)==1)
        {
            x[j++]=i;
        }
        if(j==k)
        break;
    }
}
void solution::Print()
{
    for(int i=0;i<k;i++)
    {
        cout<<x[i]<<" ";
    }
}
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int m,k;
        cin>>m>>k;
        solution s(m,k);
        s.Palin();
        s.Print();
        cout<<endl;
    }
}