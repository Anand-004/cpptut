#include <iostream>
#include <cmath>
//using namespace std;

int main()
{
    double a;
    double b;
    double c;
    std::cout<<"\n"<<"-------Hello Welcum to Hypotenuse Finder..!!-----------"<<"\n";
    std::cout<<"Enter Length of side A :";
    std::cin>>a;
    std::cout<<"Enter Length of Side B :";
    std::cin>>b;

    a=pow(a,2);
    b=pow(b,2);
    c=sqrt(a+b);

    std::cout<<"The hypotenuse of the triangle is : "<<c<<std::endl<<"\n3";

}