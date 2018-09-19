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
    int rule1,//Rule 1 for addition of binary numbers
            rule2,//Rule 2 for addition of binary numbers
            rule3,//Rule 3 for addition of binary numbers
            rule4,//Rule 4 for addition of binary numbers
            binary1,//Binary Number 1
            binary2;//Binary Number 2
    
    //Character Array
    const char SIZE=5;
    char addBiny [SIZE]="1000";
    
    //Input or initialize values Here
    cout<<"This program will calculate the addition of two binary numbers"<<endl;
    cout<<"Enter the first binary number"<<endl;
    cin>>binary1;
    cout<<"Enter the second binary number"<<endl;
    cin>>binary2;
    
    
    //Process/Calculations Here
    rule1=0+0;
    rule2=0+1;
    rule3=1+0;
    rule4=1+1;
   
    
    //Output Located Here
    /*Note:
     * Example of output
     *          1 0 1 0
     *      +   0 0 0 1
     *      --------------
     */
    cout<<endl;
    cout<<"   "<<binary1<<endl;
    cout<<" + "<<binary2<<endl;
    cout<<"_______________"<<endl;
    cout<<rule1<<endl;
    cout<<rule2<<endl;
    cout<<rule3<<endl;
    cout<<rule4<<endl;
    cout<<addBiny<<endl;
    
   
    //Exit
    return 0;
}
