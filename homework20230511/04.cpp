#include<iostream>
using namespace std;
int i=0;
char a='A';
char b='B';
char c='C';
class solution 
{
    public:
    solution(int N)
    {
        n=N;
    }
    void process(int n,char a,char b,char c)
    {

        if(n==1)
	  {             
		i++;                         //只有一层的时候就从直接把它从A柱移动到C柱 
		printf("Step%d: Move Disk%d from %c to %c\n",i,n,a,c);
	  }
	
	    else
	  {
		process(n-1,a,c,b);                   //不止一层的话，先把N-1个从A柱移动到B柱 
		i++;
		printf("Step%d: Move Disk%d from %c to %c\n",i,n,a,c);  //把第N个移动到C柱 
	    process(n-1,b,a,c);                   //再把这N-1个从B柱移动到C柱 
	  }
    }
    private:
    int n;
};
int main()
{
    int n;
    cin>>n;
    solution s(n);
    s.process(n,a,b,c);
}

// #include<stdio.h>
// void Hannuota(int N,char a,char b,char c);
// int i = 0;                                   //定义全局变量i记录步数 
 
// int main(void)
// {
// 	int N;
 
// 	scanf("%d",&N);
 
// 	Hannuota(N,'A','B','C');
	
// 	return 0;
// }
 
// void Hannuota(int N,char a,char b,char c)  //a 代表 起始柱；b 代表中间柱； c 代表目的柱 
// {                                                         
// 	if(N==1)
// 	{             
// 		i++;                         //只有一层的时候就从直接把它从A柱移动到C柱 
// 		printf("Step%d: Move Disk%d from %c to %c\n",i,N,a,c);
// 	}
	
// 	else
// 	{
// 		Hannuota(N-1,a,c,b);                   //不止一层的话，先把N-1个从A柱移动到B柱 
// 		i++;
// 		printf("Step%d: Move Disk%d from %c to %c\n",i,N,a,c);  //把第N个移动到C柱 
// 		Hannuota(N-1,b,a,c);                   //再把这N-1个从B柱移动到C柱 
// 	}
// }