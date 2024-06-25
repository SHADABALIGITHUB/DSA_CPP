#include<bits/stdc++.h>
using namespace std;
string rootofEquation(int a,int b,int c){
        double D=(b*b)-(4*a*c);

        if(D>0){

             int one=(-b+pow(D,2))/2*a;
             int two=(-b-pow(D,2))/2*a;
                string a1=to_string(a);
                string b1=to_string(b);
             return "First root :"+a1+", Second root :"+b1;



        }
        else if(D==0){

              return to_string(-b/2*a);

        }
        
        return "Imaginary root";
}
int main(){
     cout<<"enter values";

    int a;
    cin>>a;
    int b;
    cin>>b;
    int c;
    cin>>c;
      
     
     cout<<rootofEquation(a,b,c)<<endl;

    
  
    return 0;
}