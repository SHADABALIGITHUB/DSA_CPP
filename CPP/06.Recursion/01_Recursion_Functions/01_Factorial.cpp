#include<bits/stdc++.h>
using namespace std;


int myfunction(int n){

//   base  condition
     if(n==0){
          return 0;
     }




     return n+myfunction(n-1);




}
int Factorial(int n){

//   base  condition
     if(n==1){
          return 1;
     }
     return n*Factorial(n-1);

}

int main(){

     int n;
     cout<<"Enter the value";
     cin>>n;
     int result=myfunction(n);
     cout<<"The result is :"<<result<<endl;
     cout<<"The factorial of vaue is : "<<Factorial(n)<<endl;

                    
    
                 
    return 0;
}