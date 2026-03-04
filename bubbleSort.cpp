#include<iostream>


void bubbleSort(int numArray[],int size);

int main()
    {
        int numArray[]={3,1,4,2,5,6,9,8,7,10};
        int noofEle=sizeof(numArray)/sizeof(int);
        std::cout<<"\nBefore Sorting :\n";
        for(int arrayEle:numArray){
            std::cout<<arrayEle<<" ";     
        }
        std::cout<<"\n\n-------------Initializing Sorting------------\n\n............Sorting the elements...........\n\n";
        bubbleSort(numArray,noofEle);

        std::cout<<"\nAfter Sorting :\n";
        for(int i=0;i<noofEle;i++){
            std::cout<<numArray[i]<<" ";
        }

        std::cout<<"---- "<<(numArray==&numArray[0]);
        return 0;
    }

void bubbleSort(int numArray[],int size){
    
    int temp;
    for (int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(numArray[j]>numArray[j+1]){
                temp=numArray[j];
                numArray[j]=numArray[j+1];
                numArray[j+1]=temp;
            }
        }
    }

 

}