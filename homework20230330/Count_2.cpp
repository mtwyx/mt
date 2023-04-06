#include<iostream>
#include<string>
using namespace std;

typedef struct
{
	int x;
	int count;
	
//	number()
//	{
//		memset(this,0,sizeof(number));
//	}
	
}number;

class Array
{
	public:
		Array(int N);
		void Get_Array();
		void Count();
		void Single();
		void Print();
	private:
		int n,m;
		int i,j;
		number a[20];
		number b[20];
		int c[20];
};

Array::Array(int N)
{
	n=N;
}
void Array::Get_Array()
{
	for(i=0;i<n;i++)
	{
		cin>>a[i].x;
	}
}
void Array::Count()
{
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i].x==a[j].x)
			{
				a[i].count++;
			}
		}
	}
}
void Array::Single()
{
	j=0;
	int pp[1000]={0};
	for(i=0;i<n;i++)
	{
		if(pp[a[i].x]==0)
		{
			b[j++]=a[i];
			pp[a[i].x]=1;
		}
	}
	m=j;
}
void Array::Print()
{
	j=0;
	for(i=0;i<m;i++)
	{
		if(b[i].count==2)
		{
			c[j++]=b[i].x;
		}
	}
	if(j==0)
	{
		cout<<"none"<<endl;
	}
	else
	{
		for(i=0;i<j;i++)
		{
			cout<<c[i]<<" ";
		}
	}
}
int main()
{
	int N;
	cin>>N;
	Array digit(N);
	digit.Get_Array();
	digit.Count();
	digit.Single();
	digit.Print();
	return 0;
}
