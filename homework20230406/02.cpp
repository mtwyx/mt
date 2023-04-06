#include<iostream>
using namespace std;
class Octal
{
	public:
	Octal(int N)
	{
		n=N;
	}
	int GetN()
	{
		return n;
	}
	void Convert();
	void Print();

	private:
	int a[100];
	int n;
	int i=0,len;

};

void Octal::Convert()
{
   while (1)
	{
		a[i] = n % 8;
		n = n / 8;
		if (n == 0)
		{
			break;
		}
        i++;
	}
	len=i+1;
}

void Octal::Print()
{
	   if(len<5)
    {
        for(int k=1;k<=5-len;k++)
        {
            cout<<"0";
        }
    }
	for (int j = len-1; j >= 0; j--)
	{
		cout<<a[j];
	}
}
int main()
{
	int N;
	cin>>N;
	Octal Data(N);
	Data.GetN();
	Data.Convert();
	Data.Print();
	return 0;
}
