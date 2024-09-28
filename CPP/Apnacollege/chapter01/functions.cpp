#include "functions.h"
#include<iostream>
#include<string>


int areaOfSquared(int a,int b){

    return a*b;
}



int minimumOfTwoNumber(int a,int b){

    return a<b?a:b;
}


std::string OddEvenNumber(int a){

    return a%2==0?"Even Number":"Odd Number";
}

long long int sumOfN(int n){

    return (n*(n+1))/2;
}

bool Isprime(int n){

    if(n==0 || n==1){
        return false;
    }

    for(int i=2;i<n-1;i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}



// Homw work 


float SimpleInterest(int p,int r,int t)
{   
    return  (p*r*t)/100;
}

int maximumOfTwoNumber(int a,int b){

    return a>b?a:b;

}

long long int factorialNumber(int n){

     long long int fact=1;

     for(int i=1;i<=n;i++){
        fact=fact*i;
     }

     return fact;
}

std::string CheckDriverValid(int n){

    if(n<0 && n>=113){
        return "Not a Valid Human";
    }

    if(n<18){

        return "Under Age";

    }
    if(n>=65){

        return "Over Age ";
    }

    return "Yes You can Drive";

}