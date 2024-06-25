#include<bits/stdc++.h>
using namespace std;
  int maximum(int x,int y){
    if(x>y){
        return x;
    }

    return y;
  }
int main(){
                    
    int (*fun)(int,int);
    fun=maximum;
    cout<<(*fun)(23,12);

    return 0;
}