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
    void Check();
    void Print();
    private:
    string str1;
    string str2;
    int len1;
    int len2;
    int a[1000];
    int k;
};
void solution::Check()
{
    k=0;
    len1=str1.length();
    len2=str2.length();
	int i,j;
	for(i=0;i<len2;i++)
	{
		if(str2[i]==str1[0])
		{
			for(j=1;j<len1;j++)
			{
				if(str2[i+j]!=str1[j])
				break;
			}
			if(j==len1)
			{
				a[k++]=i;
			}
		}
	}
	
}
void solution::Print()
{
    if(k==0)
    cout<<"-1"<<endl;
    else
    {
        for(int i=0;i<k;i++)
        {
            cout<<a[i]<<" ";
        }
    }
}
int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    solution s(str1,str2);
    s.Check();
    s.Print();
    return 0;
}


















// #include<stdio.h>
// #include<string.h>
// int mystrstr(char a[],char b[]);
// int main(void)
// {
// 	char a[500],b[500];
// 	gets(a);
// 	gets(b);
// 	printf("%d",mystrstr(a,b));
// 	return 0;
// }
// int mystrstr(char a[],char b[])
// {
// 	int len1=strlen(a);
// 	int len2=strlen(b);
// 	int i,j;
// 	for(i=0;i<len1;i++)
// 	{
// 		if(a[i]==b[0])
// 		{
// 			for(j=1;j<len2;j++)
// 			{
// 				if(a[i+j]!=b[j])
// 				break;
// 			}
// 			if(j==len2)
// 			{
// 				return i;
// 			}
// 		}
// 	}
// 	return -1;
// }