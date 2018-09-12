/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on September 10 11:40 p.m.
 * Purpose:  Displays Days in a Month
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
    unsigned int month,// month of a year  
            lpyear,//leap year
            year;
    
    //Input month, year
    cout<<"Enter a month"<<endl;
    cin>>month;
    cout<<"Enter a year"<<endl;
    cin>>year;
        
    //Identifying if inputed year is a Leap Year
    
    /*If year is divisible by 100 then it is a leap year if and only if it 
     *is divisible by 400
     */ 
    
    if (year%100==0)
    {
        if(year%400==0)
        {
        cout<<"Leap year"<<endl;
        switch (month)
           {
               case 1 :cout<<"31 days "<<endl;break;
               case 2 :cout<<"29 days "<<endl;break;
               case 3 :cout<<"31 days "<<endl;break;
               case 4 :cout<<"30 days "<<endl;break;
               case 5 :cout<<"31 days "<<endl;break;
               case 6 :cout<<"30 days "<<endl;break;
               case 7 :cout<<"31 days "<<endl;break;
               case 8 :cout<<"31 days "<<endl;break;
               case 9 :cout<<"30 days "<<endl;break;
               case 10 :cout<<"31 days "<<endl;break;
               case 11 :cout<<"30 days "<<endl;break;
               case 12 :cout<<"31 days "<<endl;break;
            default:cout<<"End of Program"<<endl;break;

           }
        }
        else
        {
        switch (month)
           {
               case 1 :cout<<"31 days "<<endl;break;
               case 2 :cout<<"28 days "<<endl;break;
               case 3 :cout<<"31 days "<<endl;break;
               case 4 :cout<<"30 days "<<endl;break;
               case 5 :cout<<"31 days "<<endl;break;
               case 6 :cout<<"30 days "<<endl;break;
               case 7 :cout<<"31 days "<<endl;break;
               case 8 :cout<<"31 days "<<endl;break;
               case 9 :cout<<"30 days "<<endl;break;
               case 10 :cout<<"31 days "<<endl;break;
               case 11 :cout<<"30 days "<<endl;break;
               case 12 :cout<<"31 days "<<endl;break;
               default:cout<<"End of Program"<<endl;break;

           }
        cout<<"Not a Leap year"<<endl;
        }
    }
    /*if year is not divisible by 100 then it is a leap year if and only if it
     *it is divisible by 4
     */
    else
    {
        if (year%4==0)
        {
        cout<<"Leap year"<<endl;
        switch (month)
            {
               case 1 :cout<<"31 days "<<endl;break;
               case 2 :cout<<"29 days "<<endl;break;
               case 3 :cout<<"31 days "<<endl;break;
               case 4 :cout<<"30 days "<<endl;break;
               case 5 :cout<<"31 days "<<endl;break;
               case 6 :cout<<"30 days "<<endl;break;
               case 7 :cout<<"31 days "<<endl;break;
               case 8 :cout<<"31 days "<<endl;break;
               case 9 :cout<<"30 days "<<endl;break;
               case 10 :cout<<"31 days "<<endl;break;
               case 11 :cout<<"30 days "<<endl;break;
               case 12 :cout<<"31 days "<<endl;break;
               default:cout<<"End of Program"<<endl;break;
           }
        }
        else
        {
        cout<<"Not a Leap year"<<endl;
        switch (month)
           {
               case 1 :cout<<"31 days "<<endl;break;
               case 2 :cout<<"28 days "<<endl;break;
               case 3 :cout<<"31 days "<<endl;break;
               case 4 :cout<<"30 days "<<endl;break;
               case 5 :cout<<"31 days "<<endl;break;
               case 6 :cout<<"30 days "<<endl;break;
               case 7 :cout<<"31 days "<<endl;break;
               case 8 :cout<<"31 days "<<endl;break;
               case 9 :cout<<"30 days "<<endl;break;
               case 10 :cout<<"31 days "<<endl;break;
               case 11 :cout<<"30 days "<<endl;break;
               case 12 :cout<<"31 days "<<endl;break;
               default:cout<<"End of Program"<<endl;break;

           }
   
        }
    }
  
      
    //Output Located Here
    cout<<"Month = "<<month<<endl;
    cout<<"Year  = "<<year<<endl;
 
            
    //Exit
    return 0;
}
