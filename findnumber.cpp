#include<iostream>


int findpos(int list[],int pos,int ele);

int main()
    {
        int list[]={1,2,3,4,5,6,7,8,9,10};
        int pos=sizeof(list)/sizeof(int);
        std::cout<<pos;
        int element;
        std::cout<<"\nEnter an element to search : ";
        std::cin>>element;
        int index = findpos(list,pos,element);

        if(index>0){
            std::cout<<"\n Element found At : "<<index;
        }
        else{
            std::cout<<"Element not Found ..";
        }
    }

    int findpos(int list[],int pos,int ele)
        {
            for(int i=0;i<pos;i++)  
                {
                    if(list[i]==ele){
                        return i;
                    }
                    
                }
            return -1;
        }