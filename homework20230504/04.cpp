#include<iostream>
#include<string>
using namespace std;
class solution
{
    public:
    solution(string Str,int K)
    {
        str=Str;
        k=K;
    }
    void Check()
    {
        int j=0;
        int n=str.length();
        for(int i=0;i<n;i++)
        {
            if(str[i]!='-')
            a[j++]=toupper(str[i]);
        }
        len=j;
    }
    void Print();
    private:
    string str;
    string a;
    int len;
    int k;

};
void solution::Print()
{
    int i;
    int x=len/k;
    int y=len%k;
    if(y==0)
    {
        y+=k;
        x--;
    }
    for(i=0;i<y;i++)
    {
        cout<<a[i];
    }
    for(int j=1;j<=x;j++)
    {
        cout<<'-';
        for(i=y+(j-1)*k;i<y+j*k;i++)
        {
            cout<<a[i];
        }
    }
}
int main()
{
    int k;
    string str;
    getline (cin,str);
    cin>>k;
    solution s(str,k);
    s.Check();
    s.Print();
    return 0;
}