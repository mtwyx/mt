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
    void Pow();
    private:
    int a,b;
};
void solution::Pow()
{
    int i;
    int sum=1;
    for(i=1;i<=b;i++)
    { 
        sum*=a;
    }
    cout<<sum<<endl;
}
int main()
{
    int a,b;
    scanf("%d,%d",&a,&b);
    solution s(a,b);
    s.Pow();
    return 0;
}