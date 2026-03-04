#include <iostream>
using namespace std;

int main()
    {
        int rows;
        int cols;
        char character;

        cout<<".....welcum to box creater......."<<"\n";
        cout<<"\n"<<"Enter number of rows :";
        cin>>rows;
        cout<<"\n"<<"Enter number of coloumns :";
        cin>>cols;
        cout<<"\n"<<"Enter a character to print pattern :";
        cin>>character;

        for(int i=0;i<rows;i++)
            {
                for(int j=0;j<cols;j++)
                    {
                        cout<<character;
                    }
                cout<<"\n";
            }

    return 0;
    }