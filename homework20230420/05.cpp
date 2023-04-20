#include<iostream>
using namespace std;
class solution 
{
    public:
    solution(int BJT)
    {
        bjt=BJT;
    }
    void Convert();
    void Print();
    private:
    int bjt;
    int UTC_h;
    int UTC_min;

};
void solution::Convert()
{
    int BJT_h=bjt/100;
    int BJT_min=bjt-BJT_h*100;
    int total_mins=BJT_h*60 + BJT_min;

    int total_UTC_mins = total_mins-8*60;
    UTC_h=0;
    UTC_min=0;
    if(total_UTC_mins>0)
    {
        UTC_h = total_UTC_mins/60;
        UTC_min = total_UTC_mins - UTC_h*60;   
    }
    else
    {
        total_UTC_mins+=24*60;
        UTC_h = total_UTC_mins/60;
        UTC_min = total_UTC_mins - UTC_h*60; 
    }

}
void solution::Print()
{
      if(UTC_h)
    {
        printf("%d%02d\n",UTC_h,UTC_min);
    }
    else 
    {
        printf("%d\n",UTC_min);
    }
}

int main()
{
    int n;
    cin>>n;
    solution s(n);
    s.Convert();
    s.Print();
    return 0;
}