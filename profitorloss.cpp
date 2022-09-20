#include<iostream>
using namespace std;

int main()
{
    int cost, sell_price;

    cout<<endl<<"Enter cost price for an item";
    cin>>cost;

    cout<<endl<<"Enter selling price for the same item";
    cin>>sell_price;

    if(cost<sell_price)
        cout<<"Seller has made profit";
    else
        cout<<"Seller has incurred loss";

    return 0;
    


}