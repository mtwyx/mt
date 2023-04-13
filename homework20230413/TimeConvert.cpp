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

    private:
    int bjt;

};
void solution::Convert()
{
    int hour = bjt /100;
    int min = bjt - hour * 100;
    int total_mins = hour * 60 + min;

    int total_utc_min = total_mins - 8*60;
    int utc_h = 0;  // UTC Ð¡Ê±
    int utc_min = 0; // UTC ·ÖÖÓ

    if(total_utc_min>0)
    {
        utc_h = total_utc_min / 60;
        utc_min = total_utc_min - utc_h * 60;
    }
    else
    {
        total_utc_min += 24 * 60;
        utc_h = total_utc_min / 60;
        utc_min = total_utc_min - utc_h * 60;
    }
    if(utc_h>0)
    {
        printf("%d%02d\n",utc_h,utc_min);
    }
    else 
    {
        printf("%d\n",utc_min);
    }
}
int main()
{
    int bjt;
    cin>>bjt;
    solution s(bjt);
    s.Convert();
}
