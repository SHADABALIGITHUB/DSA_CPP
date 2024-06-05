#include<bits/stdc++.h>
using namespace std;
  void run(int n){
    if(n==0){
        return;
    }
     
     run(n-1);cout<<n<<" ";


  }
int main(){


         run(100);

         cout<<endl;
  
                 
    return 0;
}