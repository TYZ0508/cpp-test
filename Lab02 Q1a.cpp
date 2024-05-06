#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double keneticEnergy(double,double);
int main()
{    
    cout<<"Enter an object's mass and velocity as required..."<<endl;
    float mass,velocity,kenergy;
    cout<<"Enter mass in kg      :";
    cin>>mass;
    cout<<"Enter velocity in m/s :";
    cin>>velocity;
    kenergy=keneticEnergy(mass,velocity);
    cout<<fixed<<setprecision(2);
    cout<<"The kinetic energy is "<<kenergy<<" joules.\n";
}
double keneticEnergy(double m,double v)
{
    double ke;
    ke=0.5 * m * pow(v,2);
    return ke;
}