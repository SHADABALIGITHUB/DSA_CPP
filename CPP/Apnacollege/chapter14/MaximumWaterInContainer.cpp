#include<bits/stdc++.h>


using namespace std;
int area(int l,int b){
    return l*b;
}
 int maxArea(vector<int>& height) {

        int s=0;
        int e=height.size()-1;

        int MaximumWater=INT_MIN;

         

         while(s<e){

             

             
             long long int breadth=e-s;
             long long int h=min(height[s],height[e]);

             MaximumWater=max(MaximumWater,area(h,breadth));


             if(height[s]<=height[e]){
                 s++;
             }
             else{
                e--;
             }


            
         }

         return MaximumWater;
        
    }

int main(){

    // Input: height = [1,8,6,2,5,4,8,3,7]
    // Output: 49
    vector<int> d={1,8,6,2,5,4,8,3,7};

    cout<<maxArea(d)<<endl;

    return 0;


}