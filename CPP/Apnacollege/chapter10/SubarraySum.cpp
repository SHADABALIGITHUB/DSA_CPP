#include<bits/stdc++.h>

using namespace std;


void subArray(vector<int> & arr){

}

int main(){

    vector<int> d={1,-4,5,4,-2,7,-5};

    //   sub Arrays are :  1,2,3,4,5,12,23,34,45,123,234,345,1234,2345,12345  total  (n*(n-1)) /2

    // brute force to find maximum subarray 
int max_Value=INT_MIN;
    for(int i=0;i<d.size();i++){
        int sum=0;

        for(int j=i;j<d.size();j++){
         
             sum+=d[j];
             
             max_Value=max(sum,max_Value);

        }
    }


    cout<<"Maximum using n*n Values : "<<max_Value<<endl;


     
    //   kadane's algorithm 

    int final_sum=INT_MIN;
    int curr_Sum=0;

    for(int i=0;i<d.size();i++){

        curr_Sum+=d[i];

        final_sum=max(final_sum,curr_Sum);

        if(curr_Sum<0){
            curr_Sum=0;
        }

    }

    cout<<"Max sum using kadane's algo :"<<final_sum<<endl;




    return 0;
}