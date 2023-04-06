#include<iostream>
using namespace std;
class YH
{
     public:
     YH(int N)
     {
        n=N; 
     }
     int GetN()
     {
        return n;
     }

     void Print();

     private:
     int n;
};

void YH::Print()
{
    int a[100][100];
    for(int i=0;i<n;i++)
    {
        a[i][0]=1;
        a[i][i]=1;
    }
    for(int i=2;i<n;i++)
    {
        for(int j=1;j<i;j++)
        {
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int N,num;
    cin>>N;
    while(N--)
    {
        cin>>num;
        YH data(num);
        data.GetN();
        data.Print();
    }
    return 0;
}
