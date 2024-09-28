#include "functions.h"
#include<iostream>
#include<string>



std::string gradingSystem(int m){

    if(m>100 || m<0){
        return "Not a Valid marks";
    }else if(m>90){

         return "A";

     }else if(m>80){
        return "B";
     }
     else if(m>70){
        return "C";
     }
     else if(m>=60){
        return "D";
     }
     else{
        return "E";
     }


}


std::string checkLowOrHigh(char data){
     if(data >=97 && data<=122){
        return "small character";
     }
     else if(data >=65 && data<=90){

        return "capital character";
        
     }

     return "nor small nor capital something else ";
}

int Sum(int n){

    int sum=0;
    
    for(int i=1;i<=n;i++){

        sum+=i;

    }

    return sum;
}


int OddSum(int n){

    int sum=0;
    //  one approach use i%2 !=0  time time n here we use i+=2 will give time n/2 overall
    for(int i=1;i<=n;i=i+2){

        

        sum+=i;

    }

    return sum;
}



//    5 start  loop  


void printSquareStar(int n){

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

           std:: cout<<" * ";
        }
        std::cout<<std::endl;
    }
}


