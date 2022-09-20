#include<iostream>
using namespace std;

int main()
{
    int year;

    cout<<endl<<"Enter a year to check whether it is leap year or not";
    cin>>year;

    if((year%100==0 && year%400==0) || (year%100!=0 && year%4==0))
        cout<<"Entered year is a leap year";

    else
        cout<<"Entered year is not a leap year";

    return 0;
}