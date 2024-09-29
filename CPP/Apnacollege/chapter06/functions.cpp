#include "functions.h"
#include<bits/stdc++.h>


using namespace std;


string decimalToBinary(int n)
{
    string str;

    while(n){
        if(n%2==0){
            str='0'+str;
        }
        else{
            str='1'+str;
        }
        n/=2;

    }
   

    return str;
}

long long int BinaryToDecimal(string n){
     
     long long int result=0;
     int j=0;

     for(int i=n.length()-1;i>=0;i--){

          if(n[i]=='1'){
            result+= pow(2,j);
          }

          j++;

     }

     return result;

}
