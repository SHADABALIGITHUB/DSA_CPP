#include "functions.h"
#include<iostream>
#include<string>

using namespace std;


string FirstFunction(){
    
    return "Hey We Created Our First Function";
}

int ParameterFirstFunction(int a,int b){

    return a*b;

}


int passByValue(int a){

    
    a++;

    return a;

}

int passByReference(int &b){

    b++;

    return b;
}

int sumOfDigit(int n){
    int sum=0;
    while(n){

        sum+=n%10;
        n/=10;

    }
    return sum;
}

int factorial(int a){
    int fac=1;
    for(int i=1;i<=a;i++){
        fac*=i;
    }
    return fac;
}

float binomialCoefficient(int n,int r){

    float num=factorial(n);
    float deno=factorial(r)*factorial(n-r);

    return num/deno;
}

bool IsPrime(int a){
    if(a==0 || a==1){
        return false;
    }
    
    for(int i=2;i*i<=a;i++){

        if(a%i==0){
            return false;
        }

    }

    return true;
}
void AllprimeTillN(int n){
     

     for(int i=1;i<=n;i++){

        if(IsPrime(i)){
            cout<<i<<' ';
        }

     }  

     cout<<endl;

}

int fabonaciiNumber(int n){

    if(n<=1){

        return n;
        
    }
    if(n==2){

        return 1;
    }

     int a=1;
     int b=1;
     int c;

     for(int i=3;i<=n;i++){
         c=a+b;
         a=b;
         b=c;
     }

     return c;
     

}