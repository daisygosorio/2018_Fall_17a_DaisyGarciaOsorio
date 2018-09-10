/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on September 10, 2018, 1:20 PM
 * Purpose: Data types errors and truncation 
 */

//System Libraries Here
#include <iostream>// I/O LIbrary 
#include <cmath>//Math Library
#include <iomanip>//Formatting Library
#include <cstdlib>//exit () function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float frac=0.1;
    float sum=0.0;
    int nLoops=10000000;
    
    //Input or initialize values Here
    
    
    //Process/Calculations Here
    for (int loop=1;loop<=nLoops;loop++){
        sum+=frac;
    }
    
    //Output Located Here
    cout<<"Answer should be =>"<<frac<<"*"
            <<nLoops<<"="<<frac*nLoops<<endl;
    cout<<"Actual answer = "<<sum<<endl;
    cout<<"Error = "<<(1-sum/frac/nLoops)*100<<"%"<<endl;
            
    //Exit
    return 0;
}
