#include<iostream>
#include<string> 




using namespace std;

int main(){

    cout<<(6&10)<<endl;
    cout<<(6|10)<<endl;
    cout<<(6^10)<<endl;
    cout<<(10<<2)<<endl;
    cout<<(10>>2)<<endl;



    //  number is power of two or not 

    int n=30;
  

    
    while(n){
       if(n==1){
         cout<<"valid"<<endl;
         break;
       }
       int bit=n&1;
       if(bit==1){
        cout<<"not valid"<<endl;
        break;
       }
       n=n>>1;
    }



    //   reverse the digits 


    int number_=1234567;
    int result=0;

    while(number_){
 
         result=(result*10)+(number_%10);
         number_=number_/10;

    }

    cout<<result<<endl;




    return 0;
}