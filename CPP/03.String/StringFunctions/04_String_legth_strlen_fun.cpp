#include<bits/stdc++.h>

using namespace std;
int main(){
                    
    string str="Hello mr i am this";
    char str1[]="Hello mr i am this";

    cout<<str.length()<<endl; // 18
     cout<<strlen(str1)<<endl; 
    //  strlen() function is used to find the length of the string. in this case for char array


    // error: request for member 'length' in 'str1', which is of non-class type 'char [18]'
    // cout<<str1.length()<<endl; // error: request for member 'length' in 'str1', which is of non-class type 'char [18]'
                 
    return 0;
}