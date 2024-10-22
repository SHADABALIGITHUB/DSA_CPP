#include<bits/stdc++.h>

using namespace std;

int binarysearchIterator(vector<int> & arr,int s,int e,int value){
      
      while(s<=e){

          int mid=(s+e)/2;

          if(arr[mid]==value){
                return mid;
          }

          else if(arr[mid]<value){
               s=mid+1;
          }
          else {

              e=mid-1;

          }

      }

      return -1;
}

int binarysearchRecursive(vector<int> &arr,int s,int e,int value){

      if(s>e){
        return -1;
      }
      int mid=(s+e)/2;

      if(arr[mid]==value){
        return mid;
      }

      else if(arr[mid]<value){
      return  binarysearchRecursive(arr,mid+1,e,value);

      }

      else{
        return binarysearchRecursive(arr,s,mid-1,value);
      }


}


int main(){

    vector<int> arr={1,2,3,4,5,6,7,8,9,10};

    cout<<"Index value foo searching 6 : is "<<binarysearchIterator(arr,0,9,6)<<endl;


    cout<<"Index value foo searching 10 : is "<<binarysearchRecursive(arr,0,9,10)<<endl;

    



    return 0;
}