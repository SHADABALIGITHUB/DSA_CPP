#include<bits/stdc++.h>

using namespace std;

void recursiveReverse(string &str,int start,int end){
      if(start>=end){
        return;
      }

      swap(str[start],str[end]);

      recursiveReverse(str,start+1,end-1);


     
}

int main(){

    string str="ABCDE";

    cout<<str<<endl;


    recursiveReverse(str,0,str.size()-1);

    // reverse(str.begin(),str.end());

    cout<<str<<endl;




    return 0;

}