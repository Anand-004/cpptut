#include <iostream>
#include<iomanip>
// using namespace std;




void showBalance(double balance);
void exitMessage();
double depositMoney(double balance);
double withdrawMoney(double balance);


int main()
    {
        double balance=0;
        char option;
        
        std::cout<<"\n";
        do
            {    
                std::cout<<"\n";
                std::cout<<"\n-----------------------------------------------------------";
                std::cout<<"\n\n"<<"............WElCOME to Mariyamman bank .......!"<<"\n\n\n";
                std::cout<<"Enter an option below "<<"\n\n";
                std::cout<<"1.Show Balance"<<"  2.Deposit Money"<<"\n"<<"3.Withdraw Money"<<"  4.Exit"<<"\n";
                std::cout<<"\n option :";
                std::cin>>option;

                switch (option)
                    {
                    case '1':
                        showBalance(balance);
                        break;
                    case'2':
                        balance+=depositMoney(balance);
                        showBalance(balance);
                        break;
                    case '3':
                        balance-=withdrawMoney(balance);
                        showBalance(balance);
                        break;
                    case '4':
                        exitMessage();
                        break;
                    default:
                        std::cout<<"\nPlease Enter a valid Option";
                        break;
                    }
                

            }while(option!='4');

    }

    void showBalance(double balance){
        std::cout<<"\nBalance : "<<std::fixed<<std::setprecision(2)<<balance;
    }

    void exitMessage(){
        std::cout<<"\n ........Thank you for visiting Mariyamman Bank........";
        std::cout<<"\n..................Please Visit Again....................\n";
        std::cout<<"-------------------------------------------------------------";
    }

    double depositMoney(double balance){
        double amount;
    
        std::cout<<"\n Enter your amount to Deposit : ";
        std::cin>>amount;
        if(amount<0){
            std::cout<<"\n Enter a Valid Amount to Deposit\n";
            return 0;
        }
        else{
            return amount;
        }
        

    }

    double withdrawMoney(double balance){
        double amount;

        std::cout<<"\n Enter your amount to Withdraw : ";
        std::cin>>amount;
        if(amount>balance){
            std::cout<<"\n Insufficient Balance.....!!!!!!!\n";
            return 0;
        }
        else{
            return amount;
        }
        
    }