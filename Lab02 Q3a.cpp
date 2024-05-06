#include<iostream>
#include <iomanip>
using namespace std;

float average(int mark[])
{
    float total=0;
    for(int i=0 ; i<5 ; i++)
    {
        total+=mark[i];
    }
    return total/5;
}
char grades(float average)
{
    if(average >80)
    {
        return'A';
    }else if (average >=60)
    {
        return'B';
    }else if (average >=50)
    {
        return'C';
    }else if (average <50)
    {
        return'F';
    }
}
int main()
{
    string name;
    int mark[5];
    cout<<"Enter Name :";
    getline(cin,name);
    for(int i=0 ; i<5 ; i++)
    {
        cout<<"Enter Marks :";
        cin>>mark[i];
        cout<<endl;
    }
    float avg = average(mark);
    char grade = grades(avg);
    cout<<endl;
    cout<<"Name     :"<<name<<endl;
    cout<<"Average  :"<<avg<<endl;
    cout<<"Grade    :"<<grade<<endl;
}