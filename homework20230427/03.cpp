#include<iostream>
using namespace std;
class solution
{
    public:
    solution(int A,int B)
    {
        a=A;
        b=B;
    }
    void Process();
    private:
    int a;
    int b;
};
void solution::Process()
{
    int i,t;
    cout<<"0.";
	for(i=1;i<=200;i++)
		if(a)
        {
			t=a*10/b;
			cout<<t;
			a=a*10%b;
		}
} 
int main()
{
    int x,y;
    scanf("%d/%d",&x,&y);
    solution s(x,y);
    s.Process();
    return 0;
}
