#include<bits/stdc++.h>

using namespace std;

int searchOnRotatedSortedArray(vector<int> &vec,int s,int e,int target){

    

     while(s<=e){

          int mid=(s+e)/2;
          if(vec[mid]==target){

              return mid;

          }

          if(vec[mid]<vec[s]){

              if(vec[mid]<target &&  target<=vec[e]){

                   s=mid+1;

              }
              else{
                  e=mid-1;
              }

          }
          else{

             if(target<vec[mid] && target>=vec[s]){
                  e=mid-1;
             }
             else{
                  s=mid+1;
             }

          }

          
     }
     return -1;

}
int main(){



     vector<int> vec={13,14,15,16,17,1,2,3,4,5,6,7,8,9,10,11,12};
     cout<<"Array List select target"<<endl;
    for(int i:vec){
        cout<<i<<' ';
    }
      cout<<endl;
      int target;
      cin>>target;

     cout<<"Index Value of Target :"<<target<<" Is: "<<searchOnRotatedSortedArray(vec,0,vec.size()-1,target)<<endl;






     
     

     
      
       
    
     

    
    return 0;
}