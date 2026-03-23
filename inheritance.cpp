#include <iostream>

class animal{
    public:
        bool alive=true;

        void eat(){
            std::cout<<"\n Yum YUm YUm...";
        }
};
class dog : public animal{
    public:
     std::string name;

     void sound(){
        std::cout<<"bow bow";
     }
};
class cat : public animal{
    public:
     std::string name;

     void sound(){
        std::cout<<"Meow meow";
     }
};
int main(){
    dog dog1;
    dog1.name="supramani";
    std::cout<<dog1.name;
    dog1.sound();
    dog1.eat();
    cat cat1;
    cat1.name="punakutty";
    std::cout<<cat1.name;
    cat1.sound();
    cat1.eat();

}