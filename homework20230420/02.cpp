#include<iostream>
using namespace std;
class solution
{
    public:
    solution(int N)
    {
        n=N;
    }
    void Print();
    private:
    int n;
};
void solution::Print()
{
    switch(n)
    {
    case 1:
        cout<<"Spring"<<endl;
        break;
    case 2:
        cout<<"Summer"<<endl;
        break;
    case 3:
        cout<<"Fall"<<endl;
        break;
    default:
        cout<<"Winter"<<endl;
        break;
    }
}
int main()
{
    int n;
    cin>>n;
    solution s(n);
    s.Print();
    return 0;
}