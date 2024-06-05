#include<bits/stdc++.h>
using namespace std;
 template<class T>
 T max12(T x ,T y){
    if(x>y){
        return x;
    }
    return y;
 }
int main(){
                    
    cout<<max12(12,13);
    cout<<max12(12.5,13.5);
                 
    return 0;
}