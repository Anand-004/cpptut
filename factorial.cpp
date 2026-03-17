#include <iostream>
int factorial(int facto);
int main()
    {
        int facto;
        int ans;
        std::cout<<"\n....Factorial of the number....\n\n";
        std::cout<<"\n Enter a number to find factoral :";
        std::cin>>facto;
        ans=factorial(facto);
        std::cout<<"\nAnswer :"<<ans<<"\n";
    }
int factorial(int facto)
    {
        if(facto>1){
            return facto*factorial(facto-1);
        }
        else{
            return 1;
        }
    }