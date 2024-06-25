#include<bits/stdc++.h>
using namespace std;
int reference(int *n){
      
         *n=40;
        return *n;
}
int value(int n){
      
         n=40;
        return n;
}

int factorial(int n){
       int fact=1;
        for(int i=1;i<=n;i++){

            fact*=i;

        }
        return fact;
}
int main(){


     int a=6;                
    cout<<factorial(a)<<endl;
    cout<<value(a)<<endl;
    cout<<a<<endl;
    int b=10;
    cout<<reference(&b)<<endl;
    cout<<b<<endl;
                 
    return 0;
}