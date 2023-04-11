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
    cout<<"请输入下一个员工的月薪： ";
    double s;
    cin>>s;
    staff1.SetSalary(s);
    cout<<endl<<"请输入下一个员工的月薪： ";
    cin>>s;
    staff2.SetSalary(s);
    cout<<endl<<"请输入下一个员工的月薪： ";
    cin>>s;
    staff3.SetSalary(s);
    cout<<endl<<"请输入下一个员工的月薪： ";
    cin>>s;
    staff4.SetSalary(s);
    cout<<endl;
    cout<<"编号"<<staff1.GetNumber()<<" 的月薪是 "<<staff1.GetSalary()<<endl<<endl;
    cout<<"编号"<<staff2.GetNumber()<<" 的月薪是 "<<staff2.GetSalary()<<endl<<endl;
    cout<<"编号"<<staff3.GetNumber()<<" 的月薪是 "<<staff3.GetSalary()<<endl<<endl;
    cout<<"编号"<<staff4.GetNumber()<<" 的月薪是 "<<staff4.GetSalary()<<endl<<endl;
    return 0;
}
