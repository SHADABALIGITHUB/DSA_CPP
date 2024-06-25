#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
      int maximumarray(vector<int>&nums,int k){

             int maxSum=INT_MIN;
    for(int i=0;i<=nums.size()-k;i++){

         int sum=0;

         for(int j=i;j<i+k;j++){

             sum+=nums[j];

         }

         maxSum=max(sum,maxSum);

         
    }     
    return maxSum;
    

      }

};
int main(){

     
    vector<int> nums={1,2,3,4,5,6,7,9};
    Solution sr;

    int value=sr.maximumarray(nums,3);

    cout<<value<<endl;



         
          
    return 0;
}