#include<bits/stdc++.h>
using namespace std;
int main(){
                    
 
    string str="madam";

      string::iterator it1;

      string::reverse_iterator it2;

        it1=str.begin();
        it2=str.rbegin();

    

    while(it1!=str.end() && it2!=str.rend()){
         if(*it1!=*it2){
             cout<<"Not Palindrone"<<endl;
             return 0;
         }

         it1++;
         it2++;
     }
     cout<<"Palindrone"<<endl;
                 
    return 0;
}