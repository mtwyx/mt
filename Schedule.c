
#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	char str;
	int count;
}s;
void sort(s a[],int n);
void count(s a[],int n);
int single(s a[],int n);
int main()
{
	int n,i,j;
	scanf("%d",&n);
	s a[n];
	getchar();
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i].str);
		a[i].count=0;
	}
	sort(a,n);
	count(a,n);
	for(i=0;i<n-1;i++)
	{
		if(a[i].str!=a[i+1].str)
		{
			if(a[i].count>1)
			{
				for(j=i;j>=0;j--)
				{
					a[j].str=a[i+1].str;
					a[j].count=a[i+1].count+a[i].count;
				}
				a[i+1].count+=a[i].count;
			}
		}
	}
	if(single(a,n))
	printf("Yes\n");
	else
	printf("No\n");
    system("pause");
	return 0;
	
}
void sort(s a[],int n)
{
	int i,j;
	s tmp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j].str>a[j+1].str)
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
void count(s a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i].str==a[j].str)
			{
				a[i].count++;
			}
		}
	}
} 
int single(s a[],int n)
{
	int i; 
	for(i=0;i<n-1;i++)
	{
		if(a[i].str!=a[i+1].str)
		return 0;
	}
	return 1;
} 


