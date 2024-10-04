#include <bits/stdc++.h>

using namespace std;

int fabonaciiLinear(int n){

    if(n==1 || n==2){
        return 1;
    }
    

    int a=1;
    int b=1;
    int c;

    for(int i=2;i<n;i++){

         c=a+b;

         a=b;
         b=c;
         


    } 

return c;
}


int fabonacii(int n){
     
     if(n==1 || n==2){
        return 1;
     }
     
     


     return fabonacii(n-1)+fabonacii(n-2);

      
}

int main(){
  

     int n=10;
    //  1 1 2 3 5 8 13 21 34 55

    //     loop time O(n)  space O(1)
     cout<<fabonaciiLinear(n)<<endl;  
 
        //   recursive  O(2^n) space(n)
     cout<<fabonacii(n)<<endl;

     



    return 0;
}