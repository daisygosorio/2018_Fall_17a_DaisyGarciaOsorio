/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on September 12, 2018, 11:34 AM
 * Purpose:  This program uses the & operator to determine a variable's address
 *           and the sizeof operator to determine its size
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
    int x=206;
    
    //Output Located Here
    //Address of variable x is returned using address operator (&)
    //Keep in mind that address of x will be displayed in hexadecimal
    cout<<"The address of x is "<<&x<<endl;
    cout<<"The sie of x is "<<sizeof(x)<<" bytes"<<endl;
    cout<<"The value in x is "<<x<<endl;
   
    //Exit
    return 0;
}
