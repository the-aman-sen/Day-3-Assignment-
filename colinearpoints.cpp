#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int x1,x2,x3,y1,y2,y3;

    cout<<endl<<"Enter x and y co-ordinate in point A : ";
    cin>>x1>>y1;

    cout<<endl<<"Enter x and y co-ordinate in point B : ";
    cin>>x2>>y2;

    cout<<endl<<"Enter x and y co-ordinate in point c : ";
    cin>>x3>>y3;

    cout<<endl<<"Entered points are : ";
    cout<<endl<<"A("<<x1<<","<<y1<<")";
    cout<<endl<<"B("<<x2<<","<<y2<<")";
    cout<<endl<<"C("<<x3<<","<<y3<<")";

    float  a=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));

    if(a<0)
        cout<<endl<<"The points don't lie on the straight line";
    else if(a>0)
        cout<<endl<<"The points don't lie on the straight line";
    else
        cout<<endl<<"The points lie on the straight line";

    return 0;
}