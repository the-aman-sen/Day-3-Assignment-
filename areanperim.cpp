#include<iostream>
using namespace std;

int main()
{
    int l,b,peri,area;

    cout<<endl<<"Enter length and breadth of the rectangle";
    cin>>l>>b;

    peri=(2*l)+(2*b);
    area=l*b;

    if(area>peri)
        cout<<endl<<"The area of the rectangle is greater than its perimeter";
    else
        cout<<endl<<"The perimeter of the rectangle is greater than its area";
        

    return 0;
 }
