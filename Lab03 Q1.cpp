#include<iostream>
#include<iomanip>
using namespace std;

class TravelPackage
{
public:
char package;
int noAdult, noChild;
float adultPrice, childPrice, discount, totalPrice;
};
int main()
{
    TravelPackage t1;
    do
    {
        cout<<"Select travel package<A,B,C>:";
        cin>>t1.package;
        if(t1.package!='A' && t1.package!='B' && t1.package!='C')
        {
            cout<<"Invalid selection."<<endl;
            cout<<"Select travel package<A,B,C>:";
            cin>>t1.package;
        }
        else
        {
            break;
        }
    }while(t1.package!='A' && t1.package!='B' && t1.package!='C');

    switch (t1.package)
    {
    case 'A':
        t1.adultPrice=1000;
        t1.childPrice=500;
        break;
    case 'B':
        t1.adultPrice=800;
        t1.childPrice=600;
        break;
    case 'C':
        t1.adultPrice=500;
        t1.childPrice=300;
        break;
    
    default:
        break;
    }
        cout<<"Enter no of adult:";
        cin>>t1.noAdult;
        cout<<"Enter no of children:";
        cin>>t1.noChild;
    t1.totalPrice=(t1.noAdult*t1.adultPrice)+(t1.noChild*t1.childPrice);
    if(t1.totalPrice >3000)
    {
        t1.totalPrice=t1.totalPrice*0.8;
    }
    cout<<"Total Price :RM"<<fixed<<setprecision(2)<<t1.totalPrice;
}