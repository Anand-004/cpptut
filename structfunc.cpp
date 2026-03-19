#include <iostream>


struct Car
        {
            std::string name;
            std::string model;
            int year=0;
            std::string color;
        };


void registerCar(Car &car1);
void displayCar(Car car1);
void paintCar(Car &car1);


int main()  
    {

        char option;
        
        Car car1;
        do{
            std::cout<<"\n\n.....----Paint Your Car----.....\n\n";
            
            std::cout<<"options are :\n";
            std::cout<<" 1.register my car  2.display my car\n 3.change color   4.Exit";
            std::cout<<"\nselect an option :";
            std::cin>>option;

            switch (option)
            {
            case '1':
                std::system("clear");
                registerCar(car1);
                break;
            case '2':
                std::system("clear");
                displayCar(car1);
                break;
            case '3':
                std::system("clear");
                paintCar(car1);
                break;
            default:
                std::cout<<"\n!!!-----Please Enter a Valid option  ...!!!";
                break;
            }
        }while(option!='4');

        return 0;
        

    }
void registerCar(Car &car1)
    {
        std::cout<<"\nWelcome to car Registration office..!\n\n";
        std::cout<<"\nEnter Car brand :";
        std::cin>>car1.name;
        std::cout<<"\nEnter Car Model:";
        std::cin>>car1.model;
        std::cout<<"\nEnter Car released Year :";
        std::cin>>car1.year;
        std::cout<<"\nEnter Car color :";
        std::cin>>car1.color;
        std::cout<<"\n\n!!!...Registration Successfull...!!!";


    }
void displayCar(Car car1)
    {
        if(car1.model.empty()||car1.name.empty()||car1.color.empty()||car1.year==0){
            std::cout<<"\n!!!...Please Register your Car properly to display it.....!!!!!";
        }
        else
        {
            std::cout<<"\n\nGarage:\n"<<car1.color<<" color "<<car1.year<<" "<<car1.name<<" "<<car1.model;
        }
    }
void paintCar(Car &car1)
    {
        std::cout<<"\n Garage :\n\n"<<"What color would you like to paint your car :";
        std::cin>>car1.color;
        std::cout<<"\n!!....PAinting Finished  !";
    }