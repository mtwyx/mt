#include<iostream>
using namespace std;
class GeWei
{
	int x;
	public:
	GeWei(int x)
	{
		this->x=x;
	}
	int GeWeiAN()
	{
		int sum=0;
		while(x!=0)
		{
			sum+=x%10;
			x/=10;
		}
		return sum;
	}
};
int main()
{
	GeWei x(123);
	cout<<x.GeWeiAN()<<endl;
}
