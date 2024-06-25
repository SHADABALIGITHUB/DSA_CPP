#include<bits/stdc++.h>
using namespace std;
int main(){
                    
   char str[50];
    char str1[50];
    cout<<"Enter a string: "<<endl;
    cin.getline(str,50);
   

    strcpy(str1,str);

    cout<<str1<<endl;

     string str2="Hello";

            strcpy(str1,str2.c_str());
    cout<<str1<<endl;
                 
    return 0;
}