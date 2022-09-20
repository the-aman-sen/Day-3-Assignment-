#include<iostream>
using namespace std;

int main()
{
    int marks;

    cout<<"Enter mark of the student out of 100";
    cin>>marks;

    if(marks>=90)
        cout<<"Student  got A+ grade";
    else if(marks>=80)
        cout<<"Student  got A grade";
    else if(marks>=70)
        cout<<"Student  got B+ grade";
    else if(marks>=60)
        cout<<"Student  got B grade";
    else if(marks>=50)
        cout<<"Student  got C+ grade";
    else if(marks>=40)
        cout<<"Student  got C grade";
    else
        cout<<"Student is failed";

    return 0;
}