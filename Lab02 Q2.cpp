#include<iostream>
#include<iomanip>
using namespace std;

double bb_4ac();
void get_a_b_c(double &x,double &y,double &z);

int main()
{
    double discriminant;
    discriminant = bb_4ac();
    cout<<"The discriminant is "<<discriminant<<endl;
    return 0;
}
double bb_4ac( )
{
double a, b, c;
get_a_b_c(a, b, c);
return b*b - 4*a*c;
}
void get_a_b_c(double &x,double &y,double &z)
{
    cout<<"Enter a, b and c : ";
    cin>>x>>y>>z;
}
