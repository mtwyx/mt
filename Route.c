#include<stdio.h>
#include <stdlib.h>
int Max(int a,int b)
{//返回a，b的最大值 
    if(a<b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int main() 
{
    int n;
    scanf("%d", &n);
    int An[n][n];//储存三角形每个位置的值 
    for(int i = 0; i < n; i ++)//三角形的行i的循环 
    {
        for(int j = 0; j <= i; j ++)//三角形列j的循环，列最大等于该行的行数 
        {
            scanf("%d", &An[i][j]);
        }
    }
    for(int i = 0; i < n; i ++)//三角形的行i的循环 
    {
        for(int j = 0; j <=i ; j ++)//三角形列j的循环，列最大等于该行的行数 
        {
            if(i >= 1)//不是第一列只有一个数的情况下 
            {
                if(j == 0)//数组第一列没有左上角的值，直接加上面的值就是最大值 
                    An[i][j] += An[i -1][j];
                else if(j == i)//即数组每列最后一个没有正上方的值，直接加左上值即可 
                    An[i][j] += An[i - 1][j - 1];
                else//其余情况加其左上右上的最大值 
                {
                    int max1 =Max(An[i - 1][j - 1],An[i - 1][j]); 
                    An[i][j] += max1;
                }
            }
        }
    }
    //上面执行完后，An数组每个值表示顶点到该位置路程最大值
    //向左下走的次数与向右下走的次数相差不能超过 1,即输出第n行最中间二个的最大值
    //注意分行数的奇偶
    if(n%2==1)  
        printf("%d\n",An[n-1][(n-1)/2]);
    else 
        printf("%d\n",Max(An[n-1][(n-1)/2],An[n-1][(n-1)/2+1]));
    
    system("pause");
    return 0;
}