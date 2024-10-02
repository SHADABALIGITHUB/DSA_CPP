#include "functions.h"
#include<bits/stdc++.h>


using namespace std;


pair<int,int> largestSmallest(int arr[],int n){
    int low=arr[0];
    int high=arr[0];
    for(int i=0;i<n;i++){

         if(arr[i]<low){
            low=arr[i];
         }
         if(arr[i]>high){
            high=arr[i];
         }
        
    }

    return {low,high};
}



//  call by reference 

int change(int &b){
    b=b+1;

    return b;

}


//  linear search  

int search(int arr[],int size,int target){

    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }

    return -1;

}

void reverseArray(int arr[],int size){

     int s=0;
     int e=size-1;

     while(s<e){


        swap(arr[s],arr[e]);


        s++;
        e--;

     }


}


pair<int,long long int> sumAndProductArray(int a[],int size){

       int sum=0;
      long long int  product=1;


       for(int i=0;i<size;i++){
        sum+=a[i];
        product*=a[i];

       }

       return {sum,product};

}



  int uniqueArray(int a[],int size){


      int xor_=0;

      for(int i=0;i<size;i++){
         xor_^=a[i];
              }

              return xor_;

       
       
          
  }

  int * intersectionArray(int a[],int second[],int size,int size2,int &resultSize){

       resultSize=size2;
       vector<int> result;

    //    unordered_map<int,int> d;
      sort(a,a+size);
      sort(second,second+size2);
      int i=0;
      int j=0;
      while(i<size && j<size2){
        if(a[i]<second[j]){
             i++;
        }else if(a[i]>second[j]){
            j++;
        }
        else{
            result.push_back(a[i]);
            i++;
            j++;
        }
      }

              
              
              resultSize=result.size();

        int *fin=new int[resultSize];

        for(int i=0;i<resultSize;i++){
            fin[i]=result[i];
        }

      

       return fin;

  }