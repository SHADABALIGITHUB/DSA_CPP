#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int n){

    if(n==0){
        return;
    }
    cout<<arr[n-1]<<" ";


    reverseArray(arr,n-1);
       


}
void printArray(int arr[],int n){
    if(n==0){
        return;
    }
    
    printArray(arr,n-1);
    cout<<arr[n-1]<<" ";
}
void ReverseBinary(int arr[],int n,int s){

    if(s>(n-1)){
        return ; 
    }
    swap(arr[n-1],arr[s]);
    
    ReverseBinary(arr,n-1,s+1);

}
int main(){

     int arr[]={1,2,3,4,5,6};
     printArray(arr,6);
     cout<<endl;
     reverseArray(arr,6);
     cout<<endl;
     ReverseBinary(arr,6,0);
     printArray(arr,6);
     cout<<endl;
     




          
    return 0;
}