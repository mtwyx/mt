#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int a[2][11] = {{31,28,31,30,31,30,31,31,30,31,30},   //非闰年
					{31,29,31,30,31,30,31,31,30,31,30}};  //闰年
class Date
{
    public:
	Date(string Str);
    void Check();
    void LeapYear();
	void Days();
    void Print();

	private:
	string str;
	int i;
	int y=0,m=0,d=0;
	int num=0,totall=0;

};
Date::Date(string Str)
{
	str=Str;
}
void Date::Check()
{
	for(i=0;i<4;i++)
	{
		
		y+=(str[i]-'0')*pow(10,3-i);
		
	} 
	for(i=5;i<7;i++)
	{
		m+=(str[i]-'0')*pow(10,6-i);
	}
	for(i=8;i<10;i++)

	{
		d+=(str[i]-'0')*pow(10,9-i);
	}
}

void Date::LeapYear()//计算闰年总数
{
	for(i=1900;i<y;i++)
	{
		if((i%400==0)||(i%4==0&&i%100!=0))
		num++;
	}
	
}

void Date::Days()
{
	for(i = 0;i < m-1;i++)
    {
		if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
			totall +=a[1][i];
		else
			totall +=a[0][i];
	}
}

void Date::Print()
{
	int w=((y-1901-num)*365 + num*366 + totall + d) % 7;
		switch(w)
    {
	    case 0:printf("Monday\n");
        break;
	    case 1:printf("Tuesday\n");
        break;
	    case 2:printf("Wednesday\n");
        break;
	    case 3:printf("Thursday\n");
        break;
	    case 4:printf("Friday\n");
        break;
	    case 5:printf("Saturday\n");
        break;
	    default :printf("Sunday\n");
	}
}




int main()
{
	string str;
	getline(cin,str);
	Date Data(str);
	Data.Check();
	Data.LeapYear();
	Data.Days();
	Data.Print();
	return 0;
}
