#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int Check(char a[],int n);
void Lower(char a[],int n);
int FindAddress(char a[],int n);
int main()
{
    int i=0;
    char ch,str[41];
    while((ch=getchar())!='\n')
    {
        str[i++]=ch;
    }
    int len=i;
    if(Check(str,len)==1)
    {
        int b[13],j=0;
        for(i=0;i<len;i++)
        {
            if(str[i]>=48&&str[i]<=57)
            b[j++]=str[i]-'0';
        }
        int n=j;
        if(n==10)
        {
            printf("***-***-");
            for(i=6;i<n;i++)
            {
                printf("%d",b[i]);
            }
            printf("\n");
        }
        else
        {
            printf("+");
            for(i=0;i<n-10;i++)
            {
                printf("*");
            }
            printf("-***-***");
            for(i=n-4;i<n;i++)
            {
                printf("%d",b[i]);
            }
            printf("\n");
        }
     
    }
    else
    {
       Lower(str,len);
       int m=FindAddress(str,len);
       printf("%c*****%c",str[0],str[m-1]);
       for(i=m;i<len;i++)
       {
            printf("%c",str[i]);
       }
       printf("\n");
    }
    return 0;
}

int Check(char a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(isalpha(a[i])==0&&a[i]!='.'&&a[i]!='@')   //  鍦板潃
        return 1;  //  鐢佃瘽
    }
    return 0;

}

void Lower(char a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(isalpha(a[i]))
        {
            a[i]=tolower(a[i]);
        }
        
    }

}

int FindAddress(char a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]=='@')
        return i;
    }
    return 0;
}



