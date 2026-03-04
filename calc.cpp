#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    char oper;
    int num1;
    int num2;
    int ans;

    cout<<"/............CALCULATOR............./"<<"\n";
    cout<<"Enter an Operator : ";
    cin>>oper;
    cout<<"\n";
    cout <<"Enter number 1 :";
    cin>>num1;
    cout << "\n";
    cout << "ENter number 2 :";
    cin>>num2;

    switch(oper)
    {
        case '+':
            ans=num1+num2;
            break;
        case '-':
            ans=num1-num2;
            break;
        case '*':
            ans=num1*num2;
            break;
        case '/':
            ans=num1/num2;
            break;
        default:
            cout<<"\n"<<"Enter a valid operator for calculation";
            break;

    }

    cout<<"\n"<<"............Answer :"<<num1<<oper<<num2<<" = "<<ans;
    getchar();

}