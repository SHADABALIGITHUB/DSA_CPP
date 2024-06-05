#include<bits/stdc++.h>
using namespace std;
 int& change(int &a){

    return a;
 }
int main(){
    int x=10;
    change(x)=30;
    cout<<x<<endl;
    return 0;
}