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
    if(n>=1&&n<=10)
    cout<<"Children"<<endl;
    else if(n>=11&&n<=20)
    cout<<"Teenagers"<<endl;
    else if(n>=21&&n<=40)
    cout<<"Youth"<<endl;
    else if(n>=41&&n<=50)
    cout<<"Middle-aged"<<endl;
    else if(n>=51&&n<=80)
    cout<<"Elderly"<<endl;
    else
    cout<<"Old man"<<endl;
}
int main()
{
    int n;
    cin>>n;
    solution Age(n);
    Age.Print();
    return 0;
}