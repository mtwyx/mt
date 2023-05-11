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
    void Reverse();
    private:
    string str;
};
void solution::Reverse()
{
    int i;
    int len=str.length();
    for(i=len-1;i>=0;i--)
    {
        cout<<str[i];
    }
}
int main()
{
    string str;
    getline (cin,str);
    solution s(str);
    s.Reverse();
    return 0;
}