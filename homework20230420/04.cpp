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
    if(n>=90&&n<=100)
    cout<<"A"<<endl;
    else if(n>=80&&n<90)
    cout<<"B"<<endl;
    else if(n>=70&&n<80)
    cout<<"C"<<endl;
    else if(n>=60&&n<70)
    cout<<"D"<<endl;
    else
    cout<<"E"<<endl;
}
int main()
{
    int n;
    cin>>n;
    solution Score(n);
    Score.Print();
    return 0;
}