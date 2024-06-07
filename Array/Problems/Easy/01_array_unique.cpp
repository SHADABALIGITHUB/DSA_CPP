// Imagine an array of numbers where every number occurs twice.
//  However, one number appears only once. How would you find 
//  this number in O (log n) time?

#include<bits/stdc++.h>
using namespace std;

int unique(vector<int>&testVector2){
      int s=0;
      int e=testVector2.size()-1;
      cout<<e;
       

      while(s<e){
          int mid=(s+e)/2;
          cout<<mid<<"{"<<testVector2[mid]<<"}"<<endl;

          if(testVector2[mid] !=testVector2[mid+1] && testVector2[mid] !=testVector2[mid-1]){
                  
          }
         else if(testVector2[mid]==testVector2[mid+1]){
              
                s=mid;
          }
          else if(testVector2[mid-1]==testVector2[mid]){
                
                e=mid;          
  
          }
           cout<<"s=>"<<s<<"e=>"<<e;
          return mid;
      }
      
      return -1;


}

int main(){

//    for(int i=0;i<10;i++){
    
   
  vector<int> testVector2 = {7, 7, 8, 8, 9, 9, 10, 10, 11};
   cout<<unique(testVector2)<<endl;
//   vector<int> testVector3 = {14, 14, 15, 15, 16, 16, 17, 17, 18};
//   vector<int> testVector4 = {21, 21, 22, 22, 23, 23, 24, 24, 25};
//   vector<int> testVector5 = {31, 31, 32, 32, 33, 33, 34, 34, 35};
//   vector<int> testVector6 = {41, 41, 42, 42, 43, 43, 44, 44, 45};
//   vector<int> testVector7 = {51, 51, 52, 52, 53, 53, 54, 54, 55};
//   vector<int> testVector8 = {61, 61, 62, 62, 63, 63, 64, 64, 65};
//   vector<int> testVector9 = {71, 71, 72, 72, 73, 73, 74, 74, 75};
//   vector<int> testVector10 = {81, 81, 82, 82, 83, 83, 84, 84, 85};
        
         

//    }
    
                    
  
 
                 
    return 0;
}