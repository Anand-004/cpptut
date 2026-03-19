#include<iostream>

int main()
{
 char opt;
 std::cout<<"\n"<<"powerful people comes from ________ ?"<<"\n";
 std::cout<<"a) powerful places b) rich places"<<"\n";
 std::cout<<"c) poor places d)your statement is wrong"<<"\n";

 std::cout<<"Enter a correct option: ";
 std::cin>>opt;
 switch(opt){
    case 'a':
        std::cout<<"Yes youv'e seen part 1 thats partially correct";
        break;
    case 'b':
        std::cout<<"Wrong Answer you rich kid";
        break;
    case 'c':
        std::cout<<"Wrong poor kid";
        break;
    case 'd':
        std::cout<<".......HISTORY WAS WRONG POWERFUL PEOPLE MAKES PLACES POWERFUL........";
        break;
    default:
        std::cout<<"Enter a Valid option you smart dude..";
 }
}