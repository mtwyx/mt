#include<iostream>
#include<string>
#include<math.h>
#include<stdlib.h>
using namespace std;
class check
{
	public:
		string str;
		int i,j;
		int n;
		int b[100];
	public:
		check(){}
		~check(){}
		check(string Str)
		{
			str=Str;
		}
		int string();
		int sign();
		int dot();
};

int check::string()
{
    n=str.length();
	for(i=0;i<n;i++)
	{
		if(isdigit(str[i])==0&&isalpha(str[i])==0&&str[i]!='@'&&str[i]!='_'&&str[i]!='-'&&str[i]!='.')
		return 0;
	}
		return 1;
}
int check::sign()
{
	j=0;
	for(i=0;i<n;i++)
	{
		if(str[i]=='@')
		{
			b[j++]=i;
		}
	}
	if(j==1&&b[0]!=0&&b[0]!=n-1)
	return 1;
	else
	return 0;
}
int check::dot()
{
	j=0;
	for(i=0;i<n;i++)
	{
		if(str[i]=='.')
		{
			b[j++]=i;
		}
	}
	if(j==1&&str[b[0]-1]!='@'&&b[0]!=n-1)
	return 1;
	else
	return 0;
}
int main()
{
	string Str;
	getline(cin,Str);
	check Data(Str);
	if(Data.string()==1&&Data.sign()==1&&Data.dot()==1)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	return 0;
}

