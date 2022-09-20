#include<iostream>
using namespace std;

int main()
{
    int days;

    cout<<"Enter the number of the days after the book is returned to the library";
    cin>>days;

    if(days<=5)
        cout<<"The fine will be 50 paise";

    else if(days>=6 && days<=10)
        cout<<"The fine will be 1 rupee";

    else if(days>10 && days<30)
        cout<<"The fine will be 5 rupees";

    else
        cout<<"The library membership will be cancelled";

    return 0;
}
