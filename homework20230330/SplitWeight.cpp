#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

class StringCount
{
    public:
		int weight[10001]={0};
		int C_weight[10001]={0};
		int i,j,k;
		int len1,len2;
		string Str;
	public:
		StringCount(){}
		~StringCount(){}
		StringCount(string str);
		void Count();
		void Single();
		void Sort();
		int sum();
};
StringCount::StringCount(string str)
{
	Str=str;
}
void StringCount::Count()
{
	len1=Str.length();
	k=0;
	for(i=0;i<len1;i++)
	{
		for(j=i;j<len1;j++)
		{
			if(Str[i]==Str[j])
			{
				weight[k]++;
			}
		}
		k++;
	}
}
void StringCount::Single()
{
	k=0;
	int p[26]={0};
	for(i=0;i<len1;i++)
	{
		if(p[Str[i]-'0']==0)
		{
			C_weight[k++]=weight[i];
			p[Str[i]-'0']=1;
		}
	}
	len2=k;
}
void StringCount::Sort()
{
	int tmp;
	for(i=1;i<len2;i++)
	{
		for(j=0;j<len2-i;j++)
		{
			if(C_weight[j]<C_weight[j+1])
			{
				tmp=C_weight[j+1];
				C_weight[j+1]=C_weight[j];
				C_weight[j]=tmp;
			}
		}
	}
}
int StringCount::sum()
{
	int sum=0;
	for(i=0;i<len2;i++)
	{
		sum+=C_weight[i]*(26-i);
	}
	return sum;
}
int main()
{
	string str;
	getline(cin,str);
	StringCount data(str);
	data.Count();
	data.Single();
	data.Sort();
	cout<<data.sum()<<endl;
	return 0;
}
