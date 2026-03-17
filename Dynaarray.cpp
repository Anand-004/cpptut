#include <iostream>

int main(){
    int num;
    int *arrays =NULL;
    std::cout<<"-Dynamic Memory array-\n\n";
    std::cout<<"Enter number of elements :";
    std::cin>>num;
    arrays =new int[num];

    for(int i=0;i<num;i++){
        std::cout<<"\nEnter value #"<<i+1<<" :";
        std::cin>>arrays[i];
    }
    std::cout<<"\nYour Values are : ";

    for(int j=0;j<num;j++){
        std::cout<<arrays[j]<<" ";    
    }

    delete[] arrays;
    return 0;

}