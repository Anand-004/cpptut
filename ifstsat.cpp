#include <iostream>

int main()
{
    int age;
    std::cout<<"Enter your age : ";
    std::cin>>age;
    if(age>18){
        std::cout<<"Your age is greater than 18";        
    }
    else if(age==0){
        std::cout<<"You are born recently";
    }
    else if(age<0){
        std::cout << "You are not borned yet";
    }
    else{
        std::cout<<"Your age is less than 18";
    }
}