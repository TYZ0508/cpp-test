#include<iostream>
using namespace std;
class Cuboid
{ int length, width, height, volume;
public:
void setdata()
{
    cout<<"Enter the width, length, height of a Cuboid object :";
    cin>>length>>width>>height;
}
void findVolume()
{
    volume=length*width*height;
}
int getlength()
{
    return length;
}
int getwidth()
{
    return width;
}
int getheight()
{
    return height;
}
int getvolume()
{
    return volume;
}
};
int main()
{ Cuboid Q;
Q.setdata();
Q.findVolume();
cout<<"------Display Cuboid Data-----"<<endl;
cout<<"Width    :"<<Q.getwidth()<<" cm"<<endl;
cout<<"Length   :"<<Q.getlength()<<" cm"<<endl;
cout<<"Height   :"<<Q.getheight()<<" cm"<<endl;
cout<<"Volume   :"<<Q.getvolume()<<" cm^3"<<endl;
return 0;
}