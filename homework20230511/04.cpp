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
		i++;                         //ֻ��һ���ʱ��ʹ�ֱ�Ӱ�����A���ƶ���C�� 
		printf("Step%d: Move Disk%d from %c to %c\n",i,n,a,c);
	  }
	
	    else
	  {
		process(n-1,a,c,b);                   //��ֹһ��Ļ����Ȱ�N-1����A���ƶ���B�� 
		i++;
		printf("Step%d: Move Disk%d from %c to %c\n",i,n,a,c);  //�ѵ�N���ƶ���C�� 
	    process(n-1,b,a,c);                   //�ٰ���N-1����B���ƶ���C�� 
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
// int i = 0;                                   //����ȫ�ֱ���i��¼���� 
 
// int main(void)
// {
// 	int N;
 
// 	scanf("%d",&N);
 
// 	Hannuota(N,'A','B','C');
	
// 	return 0;
// }
 
// void Hannuota(int N,char a,char b,char c)  //a ���� ��ʼ����b �����м����� c ����Ŀ���� 
// {                                                         
// 	if(N==1)
// 	{             
// 		i++;                         //ֻ��һ���ʱ��ʹ�ֱ�Ӱ�����A���ƶ���C�� 
// 		printf("Step%d: Move Disk%d from %c to %c\n",i,N,a,c);
// 	}
	
// 	else
// 	{
// 		Hannuota(N-1,a,c,b);                   //��ֹһ��Ļ����Ȱ�N-1����A���ƶ���B�� 
// 		i++;
// 		printf("Step%d: Move Disk%d from %c to %c\n",i,N,a,c);  //�ѵ�N���ƶ���C�� 
// 		Hannuota(N-1,b,a,c);                   //�ٰ���N-1����B���ƶ���C�� 
// 	}
// }