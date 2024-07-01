#include<bits/stdc++.h>
using namespace std;
bool checkPalindrone(string str,int i){
    
    if(i>=(str.length()/2)){
        return true;
    }

    if(str[i]!=str[str.length()-i-1]){
         
         return false;
    }
   
    return checkPalindrone(str,i+1);

}
int main(){
    string str;
    cout<<"Enter the Name to check:  ";
    getline(cin,str);
    cout<<endl;



   

    cout<<(checkPalindrone(str,0)?"TRUE":"FALSE")<<endl;
                    
    
                 
    return 0;
}