/* 
 * File: main.cpp
 * Author: Drake Gerger
 * Purpose: Winning Division
 * Created on November 14, 2017, 6:13 PM
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library


using namespace std;    //Standard Name-space under which System Libraries reside
//User Libraries
//Global Constants - Not variables only Math/Science/Conversion constants
//Function Prototypes
float gtSales(string);
void findHigh(float, float, float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float NEsale, SEsale, NWsale, SWsale;
    
    for (int i=0;i<4;i++)
    {
        switch(i)
        {
        case 0:
            NEsale=gtSales("NE");
            break;
        case 1:
            SEsale=gtSales("SE");
            break;
        case 2:
            NWsale=gtSales("NW");
            break;
        default:
            SWsale=gtSales("SW");
            break;
        }
    }
    
    
    //Exit the program
    return 0;
}


float gtSales(string name)
{
    float sales = 0;
    
    cout<<"Enter Sales Division "<<name<<" $";
    cin>>sales;
    
    return sales;
}

void findHigh (float NEsale, float SEsale, float NWsale, float SWsale)
{
    float highest=0;
    string division="";
    
    if (NEsale>SEsale && NEsale>NWsale && SEsale>SWsale)
    {
        highest=NEsale;
        division="North East";
    }
    
    else if (SEsale>NEsale && SEsale>NWsale && SEsale>SWsale)
    {
        highest=SEsale;
        division="South East";
    }
    
    else if (NWsale>NEsale && NWsale>SEsale && NWsale>SWsale)
    {
        highest=NWsale;
        division="North West";
    }
    
    else
    {
        highest=SWsale;
        division="South West";
    }
    
    cout<<"The Division that has the highest sales is... "<<division<<
    " with the total number of sales being $"<<highest;
    
    
    
    
}















