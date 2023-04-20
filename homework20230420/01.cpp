#include<iostream>
using namespace std;
class solution
{
    public:
    solution(int N)
    {
        n=N;
    }
    void Sum();
    private:
    int n;
    int sum;
};
void solution::Sum()
{
    sum=0;
    while(n>0)
    {
       sum+=n%10;
       n/=10;
    }
    cout<<sum<<endl;
}
int main()
{
    int n;
    cin>>n;
    solution num(n);
    num.Sum();
    return 0;
}