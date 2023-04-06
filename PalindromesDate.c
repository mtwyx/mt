#include<stdio.h>
#include<stdlib.h>
int Days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int Check(int n);
int TestDate1(int x);
int TestDate2(int x);

int main()
{
    int N;
    scanf("%d",&N);
    int i;
    for(i=N+1; i<99991232; i++)
   {
       if(TestDate1(i) == 1 && Check(i) == 1)
	 {
        printf("%d\n", i);
        break;
     }
   }
    for(i=N+1; i<99991232; i++)
   {
       if(TestDate2(i) == 1 && Check(i) == 1)
	 {
        printf("%d\n", i);
        break;
     }
   }
    system("pause");
    return 0;
}

int Check(int n)
{
    int year=n%10000;
    int month=n%10000/100;
    int day=n%100;
    if(month>12||month==0)
    return 0;
    if(month!=2)
    {
        if(day==0||day>Days[month])
        return 0;
    }
    else 
    {
        int l;
        if((year%400==0)||(year%4==0&&year%100!=0))
        {
            l=1;
        }
        else
        l=0;

        if(day==0||day>Days[month]+l)
        return 0;
    }
    return 1;

}

int TestDate1(int x)
{
    int a[8],i=7;
    while(x>0)
    {
        a[i--]=x%10;
        x/=10;
    }
    for(i=0;i<4;i++)
    {
        if(a[i]!=a[7-i])
        return 0;
    }
    return 1;
}

int TestDate2(int x)
{
    int a[8],i=7;
    int flag=0;
    while(x>0)
    {
        a[i--]=x%10;
        x/=10;
    }
    for(i=0;i<4;i++)
    {
        if(a[i]!=a[7-i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0&&a[0]==a[2]&&a[1]==a[3]&&a[0]!=a[1])
    return 1;
    else
    return 0;
}