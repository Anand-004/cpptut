#include<iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));   
    
    int level;
    int end;
    bool hardnessPass=true;
    int guess;
    int noofGuess=0;

    cout<<"......welcome to random number generator......."<<"\n";
    

    do{
        cout<<"Enter hardness level...!"<<"\n";
        cout<<"1.EASY  2.MEDIUM  3.HARD"<<"\n";
        cin>>level;
            if(level==1){
                end=10;

            }
            else if(level==2){
                end=50;
            }
            else if(level==3){
                end=100;
            }
            else{
                cout<<"\n"<<"Enter a valid option (1,2,3)";
                hardnessPass=false;
            }
    }while(hardnessPass==false);

    int num =(rand()%end)+1;
    cout<<"\n"<<"Guess the number between 1 - "<<end;                 

    while(true){
       cout<<"\n"<<"Guess :";
       cin>>guess;
       
       if(guess>num)
        {
            cout<<"\n"<<"Your Guess is higher than the number......! ";
        }
        else if(guess<num)
        {
            cout<<"\n"<<"Your Guess is loweer than the number......!";
        }
        else{
            cout<<"\n"<<"Correct thats athe correct guess....!!!!"<<"\n";
            cout<<"you took "<<noofGuess<<" guesses";
            break;
        }
        noofGuess++;
    }


    

    
}