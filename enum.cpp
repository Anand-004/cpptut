#include <iostream>

enum days {sunday,monday,tuesday,wednesday,thursday,friday,saturday};
int main()
{
    std::cout<<"\n---enums-day -finder- --\n\n";
    days day=friday;
    switch(day){
        case 0:
            std::cout<<"\nToday is sunday";
            break;
        case 1:
            std::cout<<"\nToday is monday";
            break;
        case 2:
            std::cout<<"\nToday is tuesday";
            break;
        case 3:
            std::cout<<"\nToday is wednesday";
            break;
        case 4:
            std::cout<<"\nToday is thursday";
            break;
        case 5:
            std::cout<<"\nToday is friday";
            break;
        case 6:
            std::cout<<"\nToday is saturday";
            break;
    }    

    
}