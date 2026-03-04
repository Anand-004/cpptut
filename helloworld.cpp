#include <iostream>

int main()
{
    std::string name;
    int age;
    std::cout<<"-----------Hello Welcum to age calculator ...!!---------"<<std::endl;

    std::cout<<"Hello BRO"<<std::endl;
    std::cout<<"What is your name ? :";
    std::getline(std::cin >> std::ws,name);
    std::cout<<"What is your age ? :";
    std::cin>>age;
    std::cout<<"Hello "<<name<<std::endl;
    std::cout<<"Your age is "<<age<<std::endl;
    return 0;
     
}