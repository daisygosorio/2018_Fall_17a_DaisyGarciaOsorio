/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on September 11, 2018, 1:20 PM
 * Purpose: Demonstrate how to use a Switch Statement
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
    char choice;
    
    //Input or initialize values Here
    cout<<"Enter A, B, or C"<<endl;
    cin>>choice;
    
    
    /*Note: This is the setup of a switch statement.
     * 
     * switch (IntegerExpression)
     * {
     *      case ConstantExpresion:
     *      //place one or more statements here
     * 
     *      case ConstantExpresion:
     *      //place one or more statements here
     * 
     *      case ConstantExpresion:
     *      //place one or more statements here
     *      
     *      default:
     *      //place one or more statements here 
     * 
     * }
     * 
     * IntegerExpression must be a variable or an expression whose value 
     * is an integer data type. ConstantExpression must be either an integer 
     * literal or integer named constant. Keep in mind that it is needed to 
     * break after every case.
     */
    
    
    //The switch statement in this program tells the user something he or she
    // already knows: the data just entered!
    switch (choice)
    {
        case 'A': cout<<"You entered A"<<endl;break;
        case 'B': cout<<"You entered B"<<endl;break;
        case 'C': cout<<"You entered C"<<endl;break;
        default : cout<<"You did not enter A, B, or C"<<endl;
    }
   
    
    //Output Located Here
   
    //Exit
    return 0;
}
