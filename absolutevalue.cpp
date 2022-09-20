#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<endl<<"Enter a negative number";
    cin>>n;

    if(n<0)
    {
        n=n*(-1);
    }
    cout<<endl<<"The absolute number is : "<<n;

    return 0;
}