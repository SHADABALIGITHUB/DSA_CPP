#include<bits/stdc++.h>
using namespace std;
void subsequence(int index,vector<int> &d,vector<int>&a,int n){

     if(index>=n){

       cout<<"[";
        for(int i=0;i<d.size();i++){

            cout<<d[i]<<" ";
        }
       cout<<"]";
        if(d.size()==0){
            
             cout<<"emppty"<<" ";
        }
        return;

        
     }
       
     d.push_back(a[index]);
     

     subsequence(index+1,d,a,n);

     d.pop_back();

     subsequence(index+1,d,a,n);

    

     
      
}

void subsequenceLoop(vector<int>&a,int n,vector<int>&d){
     
      for(int i=0;i<n;i++){

         
            
         
           
                 
                
      }

      
}
int main(){

    vector<int> a={3,1,2};
    vector<int> d;

    subsequence(0,d,a,3);





                 
    return 0;
}