#include<iostream> 
#include "functions.h"
#include<string>

using namespace std;



int main(){

     int len=10;
     int bre=20;
     int hei=5;


    //   problem 01 

     cout<<"Area of square is : "<<areaOfSquared(len,bre)<<endl;

    //  problem 02 

    cout<<"Minimum value is : "<<minimumOfTwoNumber(len,bre)<<endl;

    // problem 03 

    cout<<"Even or ODD "<<OddEvenNumber(len)<<endl;

    // problem 04 

    cout<<"Sum of "<<len<<" number is : "<<sumOfN(len)<<endl;


    //  problem 05 


    cout<<"Provided Number Is :"<<(Isprime(41) ? "Not a prime" : "Is a prime")<<endl;


    // home work Given by didi  day 01

    // calculate simple interest 
   
    //  sue long long for large values here we use int or small values 
      

    //  problem 01 

    cout<<"Simple Interest for Data is :"<<SimpleInterest(len,bre,hei)<<endl;

    //  problem 02 

     cout<<"Maximum Values are :"<<maximumOfTwoNumber(len,bre)<<endl;

    //   problem 03

    cout<<"factorial of a Number is : "<<factorialNumber(6)<<endl;

    // problem 04 


    cout<<"Driver Status  :"<<CheckDriverValid(bre)<<endl;


     



     

     


    return 0;
}