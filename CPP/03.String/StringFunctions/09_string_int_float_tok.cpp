#include<bits/stdc++.h>
using namespace std;
int main(){
                //  int   
   char str[50];
    cout<<"Enter a string: "<<endl;
    cin.getline(str,50);

    cout<<strtol(str,NULL,10)<<endl;
    // float
     char str1[50];
    cout<<"Enter a string: "<<endl;
    cin.getline(str1,50);
    cout<<strtof(str1,NULL)<<endl;


    // token 

     char str2[50];
    cout<<"Enter a string: "<<endl;
    cin.getline(str2,50);
    char *token=strtok(str2,"=;");
    
    while(token!=NULL){
    cout<<token;
        token=strtok(NULL,"=;");
    }

    cout<<endl;
    
                 
    return 0;
}