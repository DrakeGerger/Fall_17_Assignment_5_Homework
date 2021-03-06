/* 
 * File: main.cpp
 * Author: Drake Gerger
 * Purpose: Prime Number List
 * Created on November 13, 2017, 8:00 PM
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //Square Root Function
#include <iomanip>      //Formatting Library
#include <fstream>      //Write to File
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
bool isPrime(unsigned int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int tabLmt;
    unsigned char perLine;
    ofstream out;
    
    //Initialize Variables
    out.open("prime.dat");
    perLine=10;
    
    //Input Data/Variables
    cout<<"This program displays a table of"<<endl;
    cout<<"Prime Numbers"<<endl;
    cout<<"Input the table Limit"<<endl;
    cin>>tabLmt;
            
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    out<<"Prime Number Table"<<endl;
    for(int cnt=0,i=2;i<=tabLmt;i++){
        if(isPrime(i)){
            cnt++;
            out<<setw(8)<<i;
        }
        if(cnt%perLine==(perLine-1)){
            out<<endl;
            cnt=0;
        }
    }
    
    //Close the File
    out.close();
    
    //Exit the program
    return 0;
}

bool isPrime(unsigned int number){
    float sqRtNum=sqrt(number);
    for(int i=2;i<=sqRtNum;i++){
        if(number%i==0)return false;
    }
    return true;
}