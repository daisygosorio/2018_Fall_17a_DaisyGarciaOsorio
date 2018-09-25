/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on May 29, 2018, 10:20 AM
 * Purpose:  
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
    float sum=0;//sum of variables
    float temp;//represents i 
    int i=0;
    
    //Input or initialize values Here
    do
    {
        cin>>temp;
        //Process/Calculations Here
        while (sum<=temp)
        { 
            i++;
            sum+=1.0f/(i+1);

        }

        cout<<sum<<endl;
        cout<<i<<" cards"<<endl;
    }
    while (i<=temp);
   
    //Exit
    return 0;
}
