#include<bits/stdc++.h>
using namespace std;
int main(){
                    
    string str="Hello mr i am this E I O U A";
     
    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=tolower(str[i]);
        }
    }
    
    for(int i=0;i<str.length();i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            cout<<str[i]<<" ";
        }
    }
                 
    return 0;
}