#include<bits/stdc++.h>
using namespace std;
void printfabonaciirecursion(int n,int a=0,int b=1){
    
     if(n==0){
         return;
     }
     cout<<a<<" ";

     printfabonaciirecursion(n-1,b,a+b);

}
int recursionfabonacii(int n){
     
     if(n==1 || n==2){
       
         return 1;
         
     }

    

     return recursionfabonacii(n-2)+recursionfabonacii(n-1);
    
   
}
void fabonaciiloop(int n){

    int one=1;
    int two=1;
    cout<<one<<" "<<two<<" ";


    for(int i=2;i<=n;i++){

        int third=one+two;
        cout<<third<<" ";
        one=two;
        two=third;

    }
          
    
     
}
int main(){
                    
     int n;
      cout<<"enter The values : ";
     cin>>n;

    //  fabonaciiloop(n);

    // cout<<recursionfabonacii(n)<<endl;

    printfabonaciirecursion(n);

    
    
    return 0;
}