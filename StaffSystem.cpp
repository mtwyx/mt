#include<iostream>
using namespace std;

class Staff
{
    public:
    Staff(void);
    ~Staff(void);
    void SetSalary(double s);
    int GetNumber(void);
    double GetSalary(void);

    private:
    int number;
    float salary;
    static int count;

};

int Staff::count=1000;
Staff::Staff(void)
{
    number=++count;
    salary=1000.0;
}
Staff::~Staff()
{

}
void Staff::SetSalary(double s)
{
    salary=s;
}
int Staff::GetNumber(void)
{
    return number;
}
double Staff::GetSalary(void)
{
    return salary;
}

int main()
{
    Staff staff1,staff2,staff3,staff4;
    cout<<"��������һ��Ա������н�� ";
    double s;
    cin>>s;
    staff1.SetSalary(s);
    cout<<endl<<"��������һ��Ա������н�� ";
    cin>>s;
    staff2.SetSalary(s);
    cout<<endl<<"��������һ��Ա������н�� ";
    cin>>s;
    staff3.SetSalary(s);
    cout<<endl<<"��������һ��Ա������н�� ";
    cin>>s;
    staff4.SetSalary(s);
    cout<<endl;
    cout<<"���"<<staff1.GetNumber()<<" ����н�� "<<staff1.GetSalary()<<endl<<endl;
    cout<<"���"<<staff2.GetNumber()<<" ����н�� "<<staff2.GetSalary()<<endl<<endl;
    cout<<"���"<<staff3.GetNumber()<<" ����н�� "<<staff3.GetSalary()<<endl<<endl;
    cout<<"���"<<staff4.GetNumber()<<" ����н�� "<<staff4.GetSalary()<<endl<<endl;
    return 0;
}
