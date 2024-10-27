//   mountain peek index element 


#include<bits/stdc++.h>

using namespace  std;

int peekElement(vector<int> &vec){
     int s=1;
     int e=vec.size()-1;

     while(s<=e){
        int mid=s+(e-s)/2; 

        if(vec[mid]>vec[mid-1] && vec[mid]>vec[mid+1]){
            
            return mid;
        }
        if(vec[mid]>vec[mid-1]){
            s=mid+1;
        }
        else{

            e=mid-1;
        }
     }
    //  this condition never reach because peek always exist in question 
     return -1;
   
}

int main(){


     vector<int> peek={0,1,8,9,6,3};
     int index=peekElement(peek);

     cout<<"index of Peek :"<<index<<" Element is :"<<peek[index]<<endl;

    



    return 0;
}