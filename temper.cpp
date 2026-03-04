#include <iostream>
using namespace std;

int main(){
    double temp;
    char unit;
    cout<<"..........welcum to temperature converter..............."<<"\n";
    cout<<"What would you like to convert  ?"<<"\n";
    cout<<"Enter 'F' to convert celcius to farenheit"<<"\n";
    cout<<"Enter 'C to convert farenheit to celcius"<<"\n";
    cin>>unit;
    cout<<"\n"<<"Enter the degree :";
    cin>>temp;


    if(unit=='F'||unit=='f')
    {
        temp=(temp*1.8)+32.0;
    }
    else if(unit=='C'||unit=='c')
    {
        temp=(temp-32.0)/1.8;
    }

    cout<<"\n"<<"Temperature : "<<temp<<unit;
    cout<<"\n";

}