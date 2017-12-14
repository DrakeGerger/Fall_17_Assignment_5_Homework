/* 
 * File: main.cpp
 * Author: Drake Gerger
 * Purpose: Falling Distance
 * Created on November 14, 2017, 5:07 PM
 */

// This Program works but is not doing the Calculation, I don't know why.

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>

using namespace std;    //Standard Name-space under which System Libraries reside
//User Libraries
//Global Constants - Not variables only Math/Science/Conversion constants
//Function Prototypes
float FallDis(int ft = 0);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int ft=0;
    float Dis=0;
    
    
    cout<<"Calculating the object that has fell for 10 seconds..."<<endl;
    
    for (int i=1;i<=10;i++)
    {
        Dis = FallDis(i);
        cout<<i<<" Seconds: "<<Dis<<" Meters"<<endl;
    }
    
    
    //Exit the program
    return 0;
}


float FallDis(int ft)
{
    float Dis=0;
    const float grav = 9.8;
    
    ft = (0.5 * grav) * (pow(ft,2));
    return Dis;
}

















