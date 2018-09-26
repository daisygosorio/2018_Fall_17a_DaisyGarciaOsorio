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
    int n;
    
    //Hacker Rank Input
    cin>>n;
    
    for (int test=1;test<=n;test++)
    {
        if (n==1)
            cout<<"one"<<endl;
        if (n==2)
            cout<<"two"<<endl;
        if (n==3)
            cout<<"three"<<endl;
        if (n==4)
            cout<<"four"<<endl;
        if (n==5)
            cout<<"five"<<endl;
        if (n==6)
            cout<<"six"<<endl;
        if (n==7)
            cout<<"seven"<<endl;
        if (n==8)
            cout<<"eight"<<endl;
        if (n==9)
            cout<<"nine"<<endl;
           
    }
        
    
    //Input or initialize values Here
    /*if (n>=1&&n<=9)
    {
       if (n==1)
           cout<<"one"<<endl;
       else if (n==2)
           cout<<"two"<<endl;
       else if (n==3)
           cout<<"three"<<endl;
       else if (n==4)
           cout<<"four"<<endl;
       else if (n==5)
           cout<<"five"<<endl;
       else if (n==6)
           cout<<"six"<<endl;
       else if (n==7)
           cout<<"seven"<<endl;
       else if (n==8)
           cout<<"eight"<<endl;
       else if (n==9)
           cout<<"nine"<<endl;    
    }
    */
    
    //Testing if n is even or odd 
    if (n%2==0)
        cout<<"even"<<endl;
    else 
        cout<<"odd"<<endl;
        
    
    //
   
    
    //Output Located Here
   
    //Exit
    return 0;
}
/*Note:
       A for loop is a programming language statement which allows code to be repeatedly executed.

       The syntax for this is

       for ( <expression_1> ; <expression_2> ; <expression_3> )
           <statement>
       expression_1 is used for intializing variables which are generally used for controlling terminating flag for the loop.
       expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
       expression_3 is generally used to update the flags/variables.
       A sample loop will be

       for(int i = 0; i < 10; i++) {
           ...
       }
       Input Format

       You will be given two positive integers,  and  (), separated by a newline.

       Output Format

       For each integer  in the interval  :

       If , then print the English representation of it in lowercase. That is "one" for 1, "two" 2 for , and so on.
       Else if  and it is an even number, then print "even".
       Else if  and it is an odd number, then print "odd".
       Note: 

       Sample Input

       8
       11
       Sample Output

       eight
       nine
       even
       odd
 */
