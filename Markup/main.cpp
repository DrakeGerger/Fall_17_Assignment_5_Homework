/* 
 * File: main.cpp
 * Author: Drake Gerger
 * Purpose: Markup
 * Created on November 14, 2017, 3:27 PM
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library

using namespace std;    //Standard Name-space under which System Libraries reside
//User Libraries
//Global Constants - Not variables only Math/Science/Conversion constants
//Function Prototypes
float calculateRetail(float,float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float SaleCost=0;
    float percent=0;
    float totlCost=0;
    
    cout<<"Enter Sale Cost and it's Markup Percent"<<endl;
    cin>>SaleCost>>percent;
    
    while (SaleCost<0||percent<0)
    {
        cout<<"Error Try Entering the Sale Cost and it's Markup Percent"<<endl;
        cin>>SaleCost>>percent;
        
    }
    
    //Output the Markup Price
    totlCost=calculateRetail(SaleCost,percent);
    cout<<"The Final Markup Cost is: $"<<totlCost;

    //Exit the program
    return 0;
}


float calculateRetail(float cost, float percentage)
{
    float totlPrice=0;
    totlPrice=((cost/100) * percentage) + cost;
    return totlPrice;
}

















