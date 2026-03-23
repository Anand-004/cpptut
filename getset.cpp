#include<iostream>

std::string msg=" ";

class Stove{
    private:
    int temperature=0;
    public:
    bool stoveStatus=false;

    Stove(){
        std::cout<<"\n!...........New Stove Has been Bought..!\n\n";
    }
    void toggleStove(){
        this->stoveStatus?this->stoveStatus=false:this->stoveStatus=true;
        msg=" ";
    }
    void IncreseTEmp(){
        if(this->temperature<6){
            this->temperature=this->temperature+1;
            msg=" ";
        }
        else{
            msg="Stove is Already at Full..";
        }
        
    }
    void decreaseTemp(){
        if(this->temperature>0){
            this->temperature=this->temperature-1;
            msg=" ";
        }
        else{
            msg="Stove is Already at 0..";
        }
        
    }
    int displaytemp(){
        return this->temperature*100;
    }

};


int main(){
    Stove stove1;
    int option;
    do{
        std::system("clear");
        int temper = stove1.displaytemp();
        std::cout<<"\n Stove Status:"<<stove1.stoveStatus;
        std::cout<<"     Temperature :"<<temper<<"      ";
        std::cout<<msg<<std::endl;
        std::cout<<"\n\n Options : (1)TurnON/TurnOFF   (2)Increase TEmperature   (3)Decrease TEmperature  (4)Exit";
        std::cout<<"\nEnter Your OPtion :";
        std::cin>>option;
        switch(option){
            case 1:
                stove1.toggleStove();
                break;
            case 2:
                stove1.IncreseTEmp();
                break;
            case 3:
                stove1.decreaseTemp();
                break;
            case 4:
                std::cout<<"\nThank You play again...!\n\n";
                break;
            default:
                msg="Dont be Smart just select from one of the given options ...!!";
                break;
        }


    }while(option!=4);
}