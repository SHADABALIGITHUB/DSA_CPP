#include<bits/stdc++.h>
using namespace std;
void printname(string s,int c){
     if(c==0){
        return;
     }
     cout<<s<<endl;


     return printname(s,c-1);

}
int main(){
      
     int n;
     cout<<"Enter Number of times want name : "<<endl;
     cin>>n;
     printname("Shaddy coder",n);


    //  atfer this check it out some print 1 to N,  N to 1  ,1 to  N backtrack  N to 1 backtrack 



    return 0;
}

