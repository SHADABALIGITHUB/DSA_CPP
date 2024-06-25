 
#include<iostream>
#include<string>

using namespace std;
int main(){
                    
     string str;
        cout<<"Enter a string: ";
        //  only take one word
        // cin>>str;
        // complete line
          getline(cin,str);
        cout<<str<<endl;
                 
    return 0;
}