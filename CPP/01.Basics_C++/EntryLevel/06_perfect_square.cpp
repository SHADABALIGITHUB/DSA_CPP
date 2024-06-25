#include<bits/stdc++.h>
using namespace std;
bool Issquare(int n){
    int i=1;
    while(i*i<=n){
        if(i*i==n){
            return true;
        }
        i++;
    }
    return false;
       
       
}
int main(){
    int n;
    cin>>n;
    cout<<Issquare(n);

                    
      
                 
    return 0;
}