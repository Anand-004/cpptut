#include<iostream>

char getUserchoice();
char getComputerchoice();
void displayChoice(char choice);
char decideWinner(char player,char computer);
void Finals(int playerscore,int computerscore);
int main()
    {
        int rounds=0;
        int playerScore=0;
        int computerScore=0;
        char playerChoice;
        char computerChoice;
        
        do{
        playerChoice=getUserchoice();
        computerChoice=getComputerchoice();
        std::cout<<"\n ------Your Hand : ";displayChoice(playerChoice);
        std::cout<<"\n --Computer Hand : ";displayChoice(computerChoice);
        std::cout<<"\n";
        char winner=decideWinner(playerChoice,computerChoice);
        std::cout<<"\n";
        if(winner=='P'){
            playerScore++;
        }
        if(winner=='C'){
            computerScore++;
        }
        std::cout<<"\n SCORE :  "<<playerScore<<" - "<<computerScore<<"\n";

        

        if(winner != 'D') {
            rounds++;
        }
        
        }while(rounds<3);

        Finals(playerScore,computerScore);
        
    }


    char getUserchoice()
    {
        char choice;
        std::cout<<"\n--------------------------------------------------------------\n";
        std::cout<<"\n...............BEST of 3 Rock--Paper--Scissor.................\n";
       
        do
        {
            std::cout<<"\nEnter a Choice....\n\n";
            std::cout<<"\n'r' for Rock\n'p' for Paper\n's' for Scissor\n";
            std::cout<<"Choice : ";
            std::cin>>choice;

            if(choice!='r'&&choice!='p'&&choice!='s'){
                std::cout<<"\nPlease Enter a valid Choice ......!";
            }
            if(choice=='R'||choice=='P'||choice=='S'){
                std::cout<<"\n!.........Your CAPS Lock is ON.........!";
            }
            



        } while (choice!='r'&&choice!='p'&&choice!='s');

        return choice;

    }

    char getComputerchoice()
    {
        
        srand(time(0));
        int randomnum=rand();
        // std::cout<<"\n Random number :"<<randomnum;
        int cho=(randomnum%3)+1;
        switch(cho)
        {
            case 1:return 'r';
                     break;
            case 2:return 'p';
                     break;
            case 3:return 's';
                     break;
            default :return 'f';
        }



    }

    void displayChoice(char choice)
    {
        std::cout<<choice<<"\n";
    }

    char decideWinner(char player,char computer)
        {
            if(player==computer){
                std::cout<<"\n......IT's A DRAW......\n";
                return 'D';
            }
            else if((player=='r'&&computer=='s')||(player=='p'&& computer=='r')||(player=='s'&&computer=='p')){
                std::cout<<"\n .........YOU WIN......... !!!\n";
                return 'P';
            }
            else if((computer=='r'&&player=='s')||(computer=='p'&& player=='r')||(computer=='s'&&player=='p')){
                std::cout<<"\n ........YOU Lost Computer Wins.....!!!!\n";
                return 'C';
            }
            else{
                std::cout<<"\n SORRY there Was A small issue with the programmer the code doesn't workd as expected..!";
                return '0';
            }
        }

        void Finals(int pl,int co){
            if(pl>co){
                std::cout<<"\n\n*****************************************\n";
                std::cout<<"           -PLAYER WINS !-\n";
                std::cout<<"*****************************************";
            }else if(pl<co){
                std::cout<<"\n\n*****************************************\n";
                std::cout<<"           -COMPUTER WINS !-\n";
                std::cout<<"******************************************";
            }else if(pl==co){
                std::cout<<"\n\n*****************************************\n";
                std::cout<<"                -DRAW-\n";
                std::cout<<"******************************************";
            }else{
                std::cout<<"Sorry there is a small issue with Programer!";
            }
            
        }