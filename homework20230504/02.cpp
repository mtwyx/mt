#include<iostream>
using namespace std;
class solution
{
    public:
    solution(int N)
    {
        n=N;
    }
    void Input();
    void Sort();
    void Print();
    private:
    int n;
    int a[100];
};
void solution::Input()
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void solution::Sort()
{
    int tmp;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
             
            if(a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
}
void solution::Print()
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    solution s(n);
    s.Input();
    s.Sort();
    s.Print();
    return 0;
}