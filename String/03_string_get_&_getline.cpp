#include<bits/stdc++.h>
using namespace std;
int main(){
                    
    // char str[50];
    // char str1[50];

    //  cout<<"Enter a string: "<<endl;
    //  cin.get(str,50);

    // cout<<str<<endl;
    
    // cout<<"Enter a string1: "<<endl;
    // cin.get(str1,50);

    //   NOt  take second string input because of get function

    // 2 ways to solve this problem:

    // 1. cin.ignore(); // ignore the newline character
    // 2. cin.getline(str1,50); // use getline function


       char str[50];
    char str1[50];

     cout<<"Enter a string: "<<endl;
     cin.get(str,50);

    cout<<str<<endl;

     cin.ignore();
    
    cout<<"Enter a string1: "<<endl;
    cin.get(str1,50);
                 
    return 0;
}