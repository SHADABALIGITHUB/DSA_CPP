#include<bits/stdc++.h>


using namespace std;

int bestTimeToSell_1(vector<int> & st){
    
     int buy=st[0];
     int  profit=INT_MIN;

     for(int i=1;i<st.size();i++){
          if(st[i]<buy){
            buy=st[i];
          }
          else if(st[i]>buy){
              profit=max(profit,st[i]-buy);
          }
     }

     return profit==INT_MIN?0:profit;
    

}


int main(){
 

    // Input: prices = [7,1,5,3,6,4]
    // Output: 5 
    vector<int> d={7,1,5,3,6,4};

    cout<<"Maximum Profit is : "<<bestTimeToSell_1(d)<<endl;

    // Input: prices = [7,6,4,3,1]
    // Output: 0

     d={7,6,4,3,1};

    cout<<"Maximum Profit is : "<<bestTimeToSell_1(d)<<endl;



    return 0;
}