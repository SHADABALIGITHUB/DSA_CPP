#include<bits/stdc++.h>
using namespace std;
int main(){
                    
     int a[]={9,8,7,6,5};
     int *p=a;
     
     for(int i=0;i<5;i++){
           cout<<*p<<endl;
           p++;
     }
     cout<<*p;



                 
    return 0;
}