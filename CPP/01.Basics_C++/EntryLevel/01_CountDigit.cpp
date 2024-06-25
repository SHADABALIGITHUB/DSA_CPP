#include<bits/stdc++.h>
using namespace std;
 long long countDigit(long long n){
     if(n>INT_MAX   || n<INT_MIN){
            return -1;
     }
     if(n==0){
        return 0;
     }

     return 1+countDigit(n/10);
 }
int main(){
    long long  n;  cin>>n;
     if(countDigit(n)==-1){
         cout<<"Invalid Input";
         return 0;
     }
    cout<<countDigit(n);                  
      
                 
    return 0;
}