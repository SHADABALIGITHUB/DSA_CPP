#include<bits/stdc++.h>
using namespace std;
int main(){
                    
    string str="Hello mr i am this";

// first approach 
    // for(int i=0;i<str.length();i++){
    //     if(str[i]>='a' && str[i]<='z'){
    //         str[i]-=32;
    //     }
    // }

// second approach
     

     for(int i=0;i<str.length();i++){
         if(str[i]>='a' && str[i]<='z'){
              str[i]=toupper(str[i]);
         }
     }

    cout<<str<<endl;
                 
    return 0;
}