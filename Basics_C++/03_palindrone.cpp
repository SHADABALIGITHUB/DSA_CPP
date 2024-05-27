#include<bits/stdc++.h>

using namespace std;

int main(){

      int value;
      cout<<"Enter the value";
      cin>>value;
      int rev=0;

 
      while(value){
        int digit=value%10; 
        rev=rev*10+digit;


        value/=10;
      }

      cout<<"reverse value is :"<<rev<<endl;

    return 0;
}