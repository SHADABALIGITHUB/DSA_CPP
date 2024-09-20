#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"enter n"<<endl;
    cin>>n;



     for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){
            if(i+j==n-1){
                cout<<" * ";
            }
            else{
                cout<<" - ";
            }
        }
            for(int j=0;j<i;j++){
            if(i-1==j){
                cout<<" * ";
            }
            else{
                cout<<" - ";
            }
           }


            
        
        cout<<endl;

        
     }

     for(int i=1;i<n;i++){
        
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<" * ";
            }
            else{
                cout<<" - ";
            }
           }

           for(int j=n-i;j>1;j--){

            if(i-1==j){
                cout<<" * ";
            }
            else{
                cout<<" - ";
            }
           }
           cout<<endl;
     }



    return 0;
}