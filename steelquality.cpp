#include<iostream>
using namespace std;

int main()
{
    float hardness,carbon, tensile;

    cout<<"Enter hardness value of the steel on the scale of 0 to 100";
    cin>>hardness;

     cout<<"Enter carbon content value of the steel on the scale of 0 to 1.0";
    cin>>carbon;

     cout<<"Enter tensile strength value of the steel on the scale of 5000 to 10000";
    cin>>tensile;

    if(hardness>50 && carbon<0.7 && tensile>5600)
        cout<<"Grade of the steel is 10";
    
    else if(hardness>50 && carbon<0.7)
        cout<<"Grade of the steel is 9";

    else if(carbon<0.7 && tensile>5600)
        cout<<"Grade of the steel is 8";

    else if(hardness>50 && tensile>5600)
        cout<<"Grade of the steel is 7";

    else if(hardness>50 || carbon<0.7 || tensile>5600)
        cout<<"Grade of the steel is 6";

    else
        cout<<"Grade of the steel is 5";

    return 0;
    
    


}