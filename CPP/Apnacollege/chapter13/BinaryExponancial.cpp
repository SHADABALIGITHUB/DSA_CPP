#include<bits/stdc++.h>


using namespace std;


double myPow(double x, int n) {

         double value=x;
         if(n<0){
            value=1/x;
            n=abs(n);
         }
         
         double result=1.0;

         
         
         while(n){
            int bit=n&1;
            if(bit==1){
              result*=value;
              

            }
            value=value*value;
            n=n>>1;
         }

        return result;
        
    }


int main(){

    double x=2.00000;
    int n=10;

    cout<<myPow(x,n)<<endl;






    return 0;
}