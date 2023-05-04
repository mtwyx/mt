#include<iostream>
#include<string>
using namespace std;
class solution
{
    public:
    solution(string Str)
    {
        str=Str;
    }
    void Convert();
    void Print();
    private:
    string str;
    int n;
};
void solution::Convert()
{
    n=str.length();
    for(int i=0;i<n;i++)
    {
        if(str[i]>='A'&&str[i]<='C')
        {
            str[i]='2';
        }
        else if(str[i]>='D'&&str[i]<='F')
        {
            str[i]='3';
        }
        else if(str[i]>='G'&&str[i]<='I')
        {
            str[i]='4';
        }
        else if(str[i]>='J'&&str[i]<='L')
        {
            str[i]='5';
        }
        else if(str[i]>='M'&&str[i]<='O')
        {
            str[i]='6';
        }
        else if(str[i]>='P'&&str[i]<='S')
        {
            str[i]='7';
        }
        else if(str[i]>='T'&&str[i]<='V')
        {
            str[i]='8';
        }
        else if(str[i]>='W'&&str[i]<='Z')
        {
            str[i]='9';
        }
    }
}
void solution::Print()
{
    for(int i=0;i<n;i++)
    {
        cout<<str[i];
    }
}
int main()
{
    string str;
    getline(cin,str);
    solution s(str);
    s.Convert();
    s.Print();
    return 0;
}