#include<iostream>

void addressSwap(std::string &x,std::string &y);

int main()
    {
        std::string x="VAlue in string 1";
        std::string y="Value in string 2";
        
        std::cout<<"\n x :"<<x;
        std::cout<<"\n y :"<<y;

        addressSwap(x,y);

        std::cout<<"\n x :"<<x;
        std::cout<<"\n y :"<<y;



    }

void addressSwap(std::string &x,std::string &y)
    {
        std::string temp;
        temp=x;
        x=y;
        y=temp;


    }