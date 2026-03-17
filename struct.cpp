#include <iostream>

struct student
{
    std::string name;
    int rollno;
    double gpa;
    char grade;
    bool pass=true;
};

int main(){
    std::cout<<"\n--------Struct---------\n\n";
    std::cout<<"\n Enter the student details ..\n\n";
    student anand;

    std::cout<<"\nEnter your name :";
    std::cin>>anand.name;
    std::cout<<"\nEnter your roll no :";
    std::cin>>anand.rollno;
    std::cout<<"\nEnter your gpa :";
    std::cin>>anand.gpa;
    std::cout<<"\nEnter your grade :";
    std::cin>>anand.grade;

    std::cout<<"\n\nDetails....";
    std::cout<<"\n"<<anand.name<<" "<<anand.rollno<<" "<<anand.gpa<<" "<<anand.grade<<" ";

}
