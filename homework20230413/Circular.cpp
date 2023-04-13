#include<iostream>
using namespace std;
class Circular
{
    public:
    Circular(int R)
    {
        r=R;
    }
    double GetD()
    {
        return 2*r;
    }
    double GetC()
    {
        return 2*3.14*r;
    }
    double GetS()
    {
        return 3.14*r*r;
    }
    private:
    int r;
};

int main()
{
    int r;
    cin>>r;
    Circular cir(r);
    double d=cir.GetD();
    double c=cir.GetC();
    double s=cir.GetS();
    cout<<"ֱ��="<<d<<endl;
    cout<<"�ܳ�="<<c<<endl;
    cout<<"���="<<s<<endl;
    return 0;
}