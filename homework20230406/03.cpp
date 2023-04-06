#include<iostream>
using namespace std;
class NConvert
{
    public:
    NConvert(int A,int B)
    {
        a=A;
        b=B;
    }
    int GetA()
    {
        return a;
    }
    int GetB()
    {
        return b;
    }

    void Convert();
    void Print();

    private:
    int i=0,len;
    int a,b;
    int x[20];


};

void NConvert::Convert()
{
    while(1)
    {
        x[i]=a%b;
        a=a/b;
        if(a==0)
        {
            break;
        }
        i++;
    }
    len=i+1;
}

void NConvert::Print()
{
    for(int j=len-1;j>=0;j--)
    {
        cout<<x[j];
    }
}

int main()
{
    int N,a,b;
    cin>>N;
    while(N--)
    {
        cin>>a>>b;  
        NConvert Data(a,b);
        Data.GetA();
        Data.GetB();
        Data.Convert();
        Data.Print();  
        cout<<endl;
    }
    return 0;
}
