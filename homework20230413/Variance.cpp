#include<iostream>
#include<math.h>
using namespace std;
class solution
{
    public:
    void Var(int a[]);
};

void solution::Var(int a[])
{
    double sum=0;
    for(int i=0;i<6;i++)
    {
        sum+=a[i];
    }
    double avrg=sum/6;
    printf("%.2f\n",avrg);
    double var=0;
    for(int i=0;i<6;i++)
    {
        var+=pow(a[i]-avrg,2);
    }
    printf("%.2f",var/6);
}

int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int a[6];
        for(int i=0;i<6;i++)
        {
            cin>>a[i];
        }
        solution s;
        s.Var(a);
        cout<<endl;
    }
    return 0;

}