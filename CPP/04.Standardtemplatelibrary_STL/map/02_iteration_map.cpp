#include<bits/stdc++.h>
using namespace std;
int main(){
                    
     unordered_map<int,int> m;

         m[1]=2;
         m[2]=3;
         m[3]=4;
         m[4]=5;
         
             for_each(m.begin(),m.end(),[](auto i){
                 cout<<i.first<<" "<<i.second<<endl;
             });
                 
    return 0;
}