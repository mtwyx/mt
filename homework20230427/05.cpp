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
    int Max(int a,int b);
    void Find();
    private:
    int n;
    int a[100][100];
};
void solution::Input()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
}
int solution::Max(int x,int y)
{
    int i,j;
    int max=a[x][y],min=a[x][y];
    for(i=0;i<n;i++)
    {
        if(a[i][y]<min)
        {
            min=a[i][y];
        }
    }
    for(j=0;j<n;j++)
    {
        if(a[x][j]>max)
        {
            max=a[x][j];
        }
    }
    if(a[x][y]==max&&a[x][y]==min)
    return 1;
    else
    return 0;
}
void solution::Find()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(Max(i,j)==1)
            {
                cout<<i<<" "<<j;
                exit(0);
            }
        }
    }
    cout<<"No";
}

int main()
{
    int n;
    cin>>n;
    solution s(n);
    s.Input();
    s.Find();
    return 0;
}