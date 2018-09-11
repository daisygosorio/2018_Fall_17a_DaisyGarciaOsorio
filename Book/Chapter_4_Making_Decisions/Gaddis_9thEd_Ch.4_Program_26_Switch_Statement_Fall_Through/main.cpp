/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on September 11, 2018, 2:00 PM
 * Purpose: Demonstrate how a Switch Statement without break falls through
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
    char fedGrde;
    
    //Input or initialize values Here
    cout<<"Our pet food is available in three grades"<<endl;
    cout<<"A, B, or C. Which do you want pricing for?"<<endl;
    cin>>fedGrde;
    
    
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
    
    
    //The switch statement in this program uses the "fall through" feature to 
    //catch both uppercase and lowercase letters entered by the user
    switch (fedGrde)
    {
        case 'a':
        case 'A': cout<<"30 cents per pound"<<endl;break;
        case 'b':
        case 'B': cout<<"20 cents per pound"<<endl;break;
        case 'c':
        case 'C': cout<<"15 cents per pound"<<endl;break;
        default : cout<<"That is an invalid choice"<<endl;
    }
    
    //When the user enters 'a' the corresponding case has no statements 
    //associated with it, so the program falls through to the next case, which
    //corresponds with 'A'
    
    //Output Located Here
   
    //Exit
    return 0;
}
