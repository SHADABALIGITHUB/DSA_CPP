
#include "functions.h"
#include<bits/stdc++.h>


using namespace std;


void printArray(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int * Arrayfrom(int a[]){

    return a;

}

int main(){

    //  int a[100];
//     double a[100];
//     int store[10]={1,2,3,4,5};


//    int a[10];

//    cout<<sizeof(a)/sizeof(int)<<endl;

 int a[]={10,1,5};
 int size=sizeof(a)/sizeof(int);

 
pair<int,int> result= largestSmallest(a,size);

cout<<"Smallest Value :"<<result.first<<endl;
cout<<"Highest Value :"<<result.second<<endl;

     
//  pass by reference  

int b=10;

cout<<"before"<<b<<endl;


cout<<change(b)<<endl;

cout<<"After"<<b<<endl;



//  linear search  

int searching_value=45;

 cout<<"index Value for This Is : "<<search(a,size,searching_value)<<endl;



//   reverse array values 

reverseArray(a,size);
printArray(a,size);



//  home work  


pair<int,int> res= sumAndProductArray(a,size);

cout<<"Sum of Array :"<<res.first<<endl;

cout<<"Product of Array :"<<res.second<<endl;




//   max min value  
printArray(a,size);
cout<<"Max Value is : "<<result.first<<endl;
cout<<"Min Value is :"<<result.second<<endl;



//    change a into duplicate to find unique one
    a[0]=1;
    a[1]=1;
    a[2]=4;

  

printArray(a,size);

cout<<"Unique value is"<<uniqueArray(a,size)<<endl;




//   intersection 

int second[]={1,3,4,5,6};

cout<<"First Array";
printArray(second,5);
cout<<"Second Array";
printArray(a,size);

int resultSize;
int *d=intersectionArray(a,second,size,5,resultSize);
cout<<"Intersection of Two is : ";
printArray(d,resultSize);









   

    return 0;
}