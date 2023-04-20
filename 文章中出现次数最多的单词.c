#include<stdio.h>
#include<string.h>
#include<ctype.h>
int sort(int a[],int n);
int main(void)
{
	char a[1000],ch;
	int i=0,j;
	char word[100][10];
	while((ch=getchar())!=EOF)
	{
		if(ch>='A'&&ch<='Z')
		{
			ch+=32;
		}
		a[i++]=ch;
	}
	int n=i;
	int p=0,q=0;
	for(i=0;i<n;i++)
	{
		if(isalpha(a[i]))
		{
			for(j=i;isalpha(a[j])!=0;j++)
			{
				word[p][q]=a[j];
				q++;
			}
			p++;
			q=0;
			i=j-1;
		}
		
	}
	int times[100]={0};
	int len=p;
	for(i=0;i<len;i++)
	{
		for(j=i;j<len;j++)
		{
			if(strcmp(word[i],word[j])==0)
			times[i]++;
		}
	} 
	int max_times=sort(times,i);
	char probable[100][10];
	j=0;
	for(i=0;i<len;i++)
	{
		if(times[i]==max_times)
		{
			strcpy(probable[j],word[i]);
			j++;
		}
	}
	int m=j;
	char tmp[100];
	for(i=1;i<m;i++)
	{
		for(j=0;j<m-i;j++)
		{
			if(strcmp(probable[j],probable[j+1])<0)
			{
				strcpy(tmp,probable[j]);
				strcpy(probable[j],probable[j+1]);
				strcpy(probable[j+1],tmp);
			}
		}
	}
	printf("%s %d",probable[0],max_times);
	return 0;
}
int sort(int a[],int n)
{
	int i,max=0;
	for(i=0;i<n;i++)
	{
		if(a[max]<a[i])
		max=i;
	}
	return a[max];
}

//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//void reverse(char a[]);
//int main()
//{
//	int len=0,row=0,col=0;
//	char s[100],ch,word[50][15];
//	
//	while((ch=getchar())!=EOF)
//	{
//		if(isupper(ch)){
//			ch=ch+32;		
//		}
//		s[len++]=ch;
//	}
//	int num;
//	for(int i=0;i<len;i++)
//	{
//		if(isalpha(s[i]) && (isalpha(s[i+1]))==0)
//		{
//			 num=i;
//			while(isalpha(s[num])){
//			word[row][col++]=s[num];	
//			num--;			
//			}
//			word[row][col]='\0';
//			col=0;
//			row++;
//		}
//		
//	}
//	
//	int j,k,tmp,flag=1;
//	char occur[15]={'\0'};
//	for( j=0;j<row-1;j++)
//	{
//		tmp=1;
//		for( k=j+1;k<row;k++)
//		{
//			if(strcmp(word[j],word[k])==0){
//				tmp++;
//			}
//		}
//		if(tmp>flag){
//			strcpy(occur,word[j]);
//			reverse(occur);
//			flag=tmp;
//		}
//		else{
//		
//		if(tmp==flag && tmp!=1){
//			reverse(word[j]);
//			if(strcmp(word[j],occur)>0){
//				strcpy(occur,word[j]);
//			}
//		}
//		if(tmp==flag && tmp==1 ){
//			reverse(word[j]);
//			if(strcmp(word[j],occur)>0){
//				strcpy(occur,word[j]);
//			}
//		}
//				
//	}
//	}
//	printf("%s",occur);
//	printf(" %d",flag);
//	return 0;
//}
//
//void reverse(char a[])
//{
//	int i=strlen(a)-1;
//	char tmp;
//	for(int j=0;j<strlen(a)/2;j++)
//	{
//		tmp=a[j];
//		a[j]=a[i-j];
//		a[i-j]=tmp;
//	}
//}

