#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void kineticEnergy(double *,double *,double *);
int main()
{    
    cout<<"Enter an object's mass and velocity as required..."<<endl;
    double mass,velocity,kenergy;
    cout<<"Enter mass in kg      :";
    cin>>mass;
    cout<<"Enter velocity in m/s :";
    cin>>velocity;
    kineticEnergy(&mass , &velocity , &kenergy);
    cout<<"The kinetic energy is "<<fixed<<setprecision(2)<<kenergy<<" joules.\n";
}
void kineticEnergy(double *m,double *v,double *ke)
{
    *ke=0.5 * *m * pow(*v,2);
}