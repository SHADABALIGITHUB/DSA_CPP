#include<bits/stdc++.h>
using namespace std;
int main(){
                 cout<<"Enter a string 1: "<<endl;   
    char str[50];
        
    char str1[50];
    cin.getline(str,50);
       cout<<"Enter a string 2: "<<endl;
    cin.getline(str1,50);
    
    cout<<strcat(str,str1)<<endl;
                 
    return 0;
}