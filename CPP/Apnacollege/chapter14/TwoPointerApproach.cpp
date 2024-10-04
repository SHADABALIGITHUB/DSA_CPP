#include<bits/stdc++.h>


using namespace std;

void Myreverse(vector<int>& d,int s,int e){

    while(s<e){
        swap(d[s],d[e]);
        s++;
        e--;
    }
}

bool palindrone(string str,int s,int e){
    while(s<e){
        if(str[e]!=str[s]){
            return false;
        }
        s++;
        e--;
    }

    return true;
}

int main(){

    //  two pointer examples  


    // 1.)     reverse of vector

       vector<int> d={1,2,3,4,5,6};

         for(int i:d){
            cout<<i<<" ";
         }
         cout<<endl;

         Myreverse(d,0,d.size()-1);

         for(int i:d){
            cout<<i<<" ";
         }
         cout<<endl;



  
    //  2. )   palindrone or not 
 
  string str="werorew";

  cout<<(palindrone(str,0,6)?"Yes":"No")<<endl;
     

    


    return 0;


}