#include<bits/stdc++.h>

using namespace std;

void subsequence(vector<int>&d,int index,int n,vector<int>&arr,int sum,int k){

       if(index>=n){

        if(sum==k){
         cout<<"[";

          for(int i=0;i<d.size();i++){
               
               cout<<d[i];
          }
          cout<<"]"<<endl;

         
          
      }

      return ;


       
         
          
      }

     
      d.push_back(arr[index]);
      sum+=arr[index];
      subsequence(d,index+1,n,arr,sum,k);
      sum-=arr[index];
      d.pop_back();
      subsequence(d,index+1,n,arr,sum,k);

}

int main(){


     vector<int> a={3,1,2};
     vector<int> d;

    subsequence(d,0,3,a,0,3);


     


    return 0;

}