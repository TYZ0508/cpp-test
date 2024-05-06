#include<iostream>
#include<iomanip>
using namespace std;
struct Rental 
{
    char name[20];
    float rent;
    int month;
};
float report(struct Rental re[])
{
    float total=0.0,unpaid;
    for(int i=0;i<3;i++)
    {
        unpaid = re[i].rent * re[i].month;
        if(unpaid>1000)
        {
            cout<<"Name   : "<<re[i].name<<endl;
            cout<<"Rental : "<<re[i].rent<<endl;
            cout<<"Month  : "<<re[i].month<<endl;
            cout<<"Unpaid : RM"<<unpaid<<endl;
            total=total +unpaid;
        }
    }
    return total;
}

int main()
{
    struct Rental R[3]={{"Megan",300,4},{"Johnson",250,1},{"David",790,2}};
    float grandTotal;
    grandTotal = report(R);
    cout<<"The unpaid amount : RM "<<fixed<<setprecision(2)<<grandTotal<<endl;
    return 0;
}