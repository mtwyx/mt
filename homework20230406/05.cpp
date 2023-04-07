#include<iostream>
using namespace std;
class Con
{
    public:
    Con(long long N,int R)
    {
        n=N;
        r=R;
    }
    int GetN()
    {
        return n;
    }
    int GetR()
    {
        return r;
    }
    void convert();
    void Print();
    

    private:
    long long n;
    int r;
    int cnt=0;
    char b[100];
    char a[17]="0123456789ABCDEF";

};

void Con::convert()
{

    while(n>0)
    {
        b[cnt++]=a[n%r];
        n/=r;
    }
}

void Con::Print()
{
        for(int i=cnt-1
        ;i>=0;i--)
      {
          printf("%c",b[i]);
      }
    
}
int main()
{
    int R;
    long long N;
    cin>>N>>R;
    Con Data(N,R);
    Data.GetN();
    Data.GetR();
    Data.convert();
    Data.Print();
    return 0;
}

