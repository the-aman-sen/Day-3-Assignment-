#include<iostream>
using namespace std;

int main()
{
    int ram,shyam,ajay;

    cout<<endl<<"Enter age of Ram : ";
    cin>>ram;

    cout<<endl<<"Enter age of Shyam : ";
    cin>>shyam;

    cout<<endl<<"Enter ageof Ajay : ";
    cin>>ajay;

    

    if((ram>shyam) && (ram>ajay))

        cout<<endl<<"Ram is the eldest";
    
    if((shyam>ram) && (shyam>ajay))
        cout<<endl<<"Shyam is the eldest";

    if((ajay<ram) && (ajay<shyam))
        cout<<endl<<"Ajay is the eldest";

    return 0;
}