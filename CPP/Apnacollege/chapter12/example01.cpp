#include <bits/stdc++.h>

using namespace std;

int sumLinear(vector<int> & arr){

    int n=arr.size();

return  (n*(n+1))/2;
}


int sumBigOn(vector<int> & arr){
  int sum=0;
    for(int i=0;i<arr.size();i++){

     sum+=arr[i];
    
        
    }

    return sum;

      
}

int main(){
  

     vector<int> vec={1,2,3,4,5,6,7};
    //   sorted array 


     cout<<sumLinear(vec)<<endl;
     cout<<sumBigOn(vec)<<endl;

     



    return 0;
}