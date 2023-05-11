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
    void Count();
    private:
    string str;
};
void solution::Count()
{
    int n=str.length();
    int i,j;
    int tmp;
    for(i=0;i<n;i++)
    {
        tmp=0;
        for(j=i;j<n;j++)
        {
            if(str[j]!=' ')
            {
                tmp++;
            }
            if(str[j+1]==' ')
            {
                cout<<tmp<<" ";
                i+=tmp;
                break;
            }
            if(str[j+1]=='.')
            {
                cout<<tmp;
                exit(0);
            }
        }
    }
}
int main()
{
    string str;
    getline(cin,str);
    solution s(str);
    s.Count();
    return 0;
}