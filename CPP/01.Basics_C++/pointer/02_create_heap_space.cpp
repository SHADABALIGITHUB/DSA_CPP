#include<bits/stdc++.h>
using namespace std;
int main(){
                    
   int a[]={12,13,14,15};
   int length= sizeof(a)/sizeof(int);
//    cout<<length;
   int *p=new int[length];
     
     for(int i=0;i<length;i++){
          cout<<p[i]<<endl;
     }

     for(int i=0;i<length;i++){
         p[i]=a[i];
     }

     for(int i=0;i<length;i++){
          cout<<p[i]<<endl;
     }

    delete [] p;

                 
    return 0;
}