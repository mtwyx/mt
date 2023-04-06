#include<iostream>
#include<math.h>
using namespace std;

class Fraction
{
	friend int Divise(int x,int y);
	public:
		Fraction(int N);
		void GetArray();
		int Error();
		void Sum();
		void Print();
	private:
		int a[20],b[20];
		int n;
		int i;
		int sum,flight;
};
int Divise(int x,int y)
{
	int divisor=1,j;
	if(x<y)
	{
		for(j=1;j<=x;j++)
		{
			if((x%j==0)&&(y%j==0))
			{
				if(j>divisor)
			    {
			   		divisor=j;
				}
			}
	    }
	}
	else
	{
		for(j=1;j<=y;j++)
		{
			if((x%j==0)&&(y%j==0))
			{
				if(j>divisor)
				{
					divisor=j;
				}
			}
		}   
	}
	return divisor;
}
Fraction::Fraction(int N)
{
	n=N;
}
void Fraction::GetArray()
{
	for(i=0;i<n;i++)
	{
		scanf("%d/%d",&a[i],&b[i]);
	}
}
int Fraction::Error()
{
	for(i=0;i<n;i++)
	{
		if(b[i]<=0||a[i]==0)
		    return 1;
	}
	for(i=0;i<n;i++)
	{
		if(Divise(abs(a[i]),b[i])>1||(abs(a[i])==1&&b[i]==1))
		    return 1;
	}
	return 0;
}
void Fraction::Sum()
{
	flight=1,sum=0;
	for(i=0;i<n;i++)
	{
		flight*=b[i];
	}
	for(i=0;i<n;i++)
	{
		sum+=flight*a[i]/b[i];
	}
}
void Fraction::Print()
{
	int x1=sum/Divise(abs(sum),flight);
	int y1=flight/Divise(abs(sum),flight);
	if(x1%y1==0)
	cout<<x1/y1;
	else
	cout<<x1<<"/"<<y1;
}
int main()
{
	int N;
	cin>>N;
    Fraction data(N);
    data.GetArray();
    if(data.Error()==1)
    {
    	cout<<"Error!"<<endl;
    	return 0;
	}
	else
	{
		data.Sum();
		data.Print();
	}

    return 0;	
}
