#include<bits/stdc++.h>


using namespace std;

int main(){
    //   sorted array 
    vector<int> vec={1,9,13,34,56};
    int target=35;

    //  brute force approach 

    for(int i=0;i<vec.size();i++){

        for(int j=i+1;j<vec.size();j++){
            
             if(vec[i]+vec[j]==target){
                cout<<i<<" : "<<j<<endl;
                break;
             }
        }
    }


    //  optimal approach 

     int j=0;
     int i=vec.size()-1;

     while(j<i){
           
           if(vec[i]+vec[j]<target){
             j++;
           }
           else if(vec[i]+vec[j]>target){
             i--;
           }
           else{
            cout<<j<<" : "<<i<<endl;
            break;
           }

     }






    return 0;

}