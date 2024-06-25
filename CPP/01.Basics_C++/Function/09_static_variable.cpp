#include<bits/stdc++.h>
using namespace std;
// int v=0;
void increment(){
    static int v=0;

    int a=0;
    v++;
    a++;
    cout<<v<<" "<<a<<endl;
}
int main(){


    increment();
    increment();
    increment();      
 
                 
    return 0;
}