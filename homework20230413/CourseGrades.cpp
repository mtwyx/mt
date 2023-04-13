#include<iostream>
#include<string.h>
using namespace std;

typedef struct
{
    char name[31];
    double score1;
    double score2;
    double score;
}stu;

class Count
{
    public:
    void Input();
    void Sort();
    void Print();

    private:
    int n;
    stu s[101];

};
void Count::Input()
{
    int i=0;
    char name[31];
    double score1;
    double score2;
    while((cin>>name>>score1>>score2))
    {
        strcpy(s[i].name,name);
        s[i].score1=score1;
        s[i].score2=score2;
        s[i].score=score1*0.4+score2*0.6;
        i++;
    }
    n=i;
}

void Count::Sort()
{
    stu tmp;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(s[j].score<s[j+1].score)
            {
                tmp=s[j];
                s[j]=s[j+1];
                s[j+1]=tmp;
            }
        }
    }
}

void Count::Print()
{
    for(int i=0;i<n;i++)
    {
        printf("%s %.2f %.2f %.2f\n",s[i].name,s[i].score1,s[i].score2,s[i].score);
    }

}

int main()
{
    Count s;
    s.Input();
    s.Sort();
    s.Print();
    return 0;
}
