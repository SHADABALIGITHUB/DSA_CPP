#include<iostream> 
#include "functions.h"
#include<string>


using namespace std;

int main(){


      cout<<FirstFunction()<<endl;
      cout<<ParameterFirstFunction(10,20)<<endl;

     //   sum already done 
     //  min number 
     //  factorial already done 

     int a=20;

     cout<<"Before :"<<a<<endl;

     cout<<passByValue(a)<<endl;

      cout<<"After :"<<a<<endl;

      int b=20;

     

     cout<<"Before :"<<b<<endl;

     cout<<"Value FromFunction"<<passByReference(b)<<endl;

      cout<<"After :"<<b<<endl;



         
     //  problem  sum of digits 
      cout<<endl<<endl;

      cout<<"Total Sum is :"<<sumOfDigit(1456)<<endl;


     //  probelm binomial coefficient

      cout<<endl<<endl;
       cout<<"Binomial coefficient is : "<<binomialCoefficient(10,4)<<endl;


     //   home work 


     // problem 01 
     // prime or not  already done 



     // problem 02 

     cout<<"List of All prime Number if ";
     AllprimeTillN(25);


     // problem 03 

     // int n=45;   use n value as i use direct 9 whose 9th fabonacii is 34

     cout<<"Nth fabonacii Number : "<<fabonaciiNumber(9)<<endl;

   
   







    return 0;
}