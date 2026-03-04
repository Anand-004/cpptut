#include<iostream>
using namespace std;

bool oddoreven(int num);

int main(){
    int num;
    bool iseven;
    cout<<"Enter a number :";
    cin>>num;

    iseven=oddoreven(num);

    if(iseven){
        cout<<"the number is even";
    }
    else{
        cout<<"the number is odd";
    }


}

bool oddoreven(int num){
    if(num%2==0){
        return true;
    }
    return false;
}