#include <iostream>
template <typename ar1,typename ar2>

auto max(ar1 arg1,ar2 arg2)
    {
        return (arg1>arg2)?arg1:arg2;
    }

int main(){
    int a=10;
    char b='a';
    std::cout<<"\nAnswer :"<<max(a,b)<<"\n";
}