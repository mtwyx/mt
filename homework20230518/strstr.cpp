#include<iostream>
#include<string>
using namespace std;
class solution
{
    public:
    solution(string Str1,string Str2)
    {
        str1=Str1;
        str2=Str2;
    }
    void Strstr();
    private:
    string str1;
    string str2;
};
void solution::Strstr()
{
    int len1=str1.length();
    int len2=str2.length();
    int i,j;
    int tmp=0;
    for(i=0;i<len1;i++)
    {
        if(str1[i]==str2[0])
        {
            for(j=0;j<len2;j++)
            {
                if(str1[i+j]==str2[j])
                {
                    tmp++;
                }
            }
        }
        if(tmp==len2)
        {
            cout<<i<<endl;
            exit(0);
        }
    }
    cout<<"-1"<<endl;
}
int main()
{
    string str1;
    string str2;
    getline(cin,str1);
    getline(cin,str2);
    solution s(str1,str2);
    s.Strstr();
    return 0;
}