#include<iostream>
using namespace std;
typedef struct 
{
    int power;
    int coe;
}arr;

class solution
{
    
    public:
    void Input();
    void Sum();
    void Print();
    private:
    arr s1[100];
    arr s2[100];
    arr s3[200];
    int l1,l2,n;
};

void solution::Input()
{
    int num1,num2;
    l1=0,l2=0;
    while((cin>>num1>>num2))
    {
        s1[l1].power=num1;
        s1[l1].coe=num2;
        l1++;
        if(num1==0)
        break;
    }
    while((cin>>num1>>num2))
    {
        s2[l2].power=num1;
        s2[l2].coe=num2;
        l2++;
        if(num1==0)
        break;
    }
}

void solution::Sum()
{
    int i,j,k;
    for(i=0;i<l1;i++)
    {
        s3[i].power=s1[i].power;
        s3[i].coe=0;
    }
    for(;i<l1+l2;i++)
    {
        s3[i].power=s2[i-l1].power;
        s3[i].coe=0;
    }
    n=l1+l2;
    for(i=0;i<n;i++)		
	{
		for(j=i+1;j<n;j++)	
		{
			if(s3[i].power==s3[j].power)
			{
				for(int temp = j;temp<n-1;temp++)
					s3[temp].power=s3[temp+1].power;	
				j--;	
				n--;	
			}
		}
	}
    for(i=0;i<n;i++)
    {
        for(j=0;j<l1;j++)
        {
            if(s3[i].power==s1[j].power)
            {
                s3[i].coe+=s1[j].coe;
            }
        }
        for(k=0;k<l2;k++)
        {
            if(s3[i].power==s2[k].power)
            {
                s3[i].coe+=s2[k].coe;
            }

        }
    }
}
void solution::Print()
{
    arr tmp;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(s3[j].power<s3[j+1].power)
            {
                tmp=s3[j];
                s3[j]=s3[j+1];
                s3[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
       if(s3[i].coe==0)
       continue;
       else if(s3[i].coe==1&&s3[i].power!=1)
       {
          cout<<"x"<<s3[i].power;
       }
       else if(s3[i].coe!=1&&s3[i].power==1)
       {
          cout<<s3[i].coe<<"x";
       }
       else if(s3[i].coe==1&&s3[i].power==1)
       {
          cout<<"x";
       }
       else
       cout<<s3[i].coe<<"x"<<s3[i].power;

       if(i!=(n-2))
       {
          cout<<"+";
       }
       else if(i==(n-2)&&s3[i+1].coe==0)
       {
          break;
       }
       else if(i==(n-2)&&s3[i+1].coe!=0)
       cout<<"+"<<s3[i+1].coe;
    }
}
int main()
{
    solution s;
    s.Input();
    s.Sum();
    s.Print();
    return 0;
}