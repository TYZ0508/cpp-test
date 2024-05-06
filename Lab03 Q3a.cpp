#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

class Purchase
{
        char name[30],code[30];
        int qty;
        float price,total;
    public:
        void set_data(char nm[50],char cd[10],int quant,float pr);
        void calculate();
        void print();
};
void Purchase::set_data(char nm[50],char cd[10],int quant,float pr)
{
    strcpy(name,nm);
    strcpy(code,cd);
    qty=quant;
    price=pr;
}
void Purchase::calculate()
{
    total=qty*price;
}
void Purchase::print()
{
    cout<<"========================="<<endl;
    cout<<"         RECEIPT         "<<endl;
    cout<<"========================="<<endl;
    cout<<"Name         :"<<name<<endl;
    cout<<"Product Code :"<<code<<endl;
    cout<<"Quantity     :"<<qty<<endl;
    cout<<"Product Price:RM"<<price<<endl;
    cout<<"Total Payment:RM"<<total<<endl;
}
int main()
{
    Purchase p;
    char username[50],prodcode[10];
    float prodprice;
    int qty;

    cout<<"========================="<<endl;
    cout<<"         WELCOME         "<<endl;
    cout<<"========================="<<endl;
    cout<<"Enter name       :";
    cin>>username;
    cout<<"Product code     :";
    cin>>prodcode;
    cout<<"Enter quantity   :";
    cin>>qty;
    cout<<"Enter price      :RM";
    cin>>prodprice;
    p.set_data(username,prodcode,prodprice,qty);
    p.calculate();
    p.print();
}