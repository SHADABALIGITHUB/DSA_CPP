#include<bits/stdc++.h>

using namespace std;

vector<int> ChangedArray(vector<int> & d,int n)
{
        long long int pro=1;

        vector<int> res(n,0);

         int count_zero=0;
         int index=0;

       for(int i=0;i<n;i++){

           if(d[i]==0){
             count_zero++;
             index=i;
           }
           else{ 
            pro*=d[i];
           }


          
       }

       if(count_zero>1){
         return res;
        
       }

       if(count_zero==1){

           res[index]=pro;

           return res;
          
       }

       for(int i=0;i<n;i++){

           d[i]=pro/d[i];
           

       }

       return d;
     

}



//   prefix sufix 

void prefixSufix(vector<int> &d,int n){
    vector<int> re(n,0);
     

    int prefix=1;
    re[0]=1;


    for(int i=1;i<n;i++){

          re[i]=re[i-1]*prefix;
          prefix=d[i];

    }

    int sufix=d[n-1];
   
        

    for(int i=n-2;i>=0;i--){
        
        re[i]=re[i]*sufix;
        sufix=d[i]*sufix;
        


    }

      int j=0;
    for(int i:re){
        d[j]=i;
        j++;
    }

    

   
    
}


int main(){
    // INPUT : [1,2,3,4]
    // OUTPUT: [24,12,8,6]


//     Input: nums = [-1,1,0,-3,3]
//     Output: [0,0,9,0,0]

    vector<int> d={-1,1,0,-3,3};

    vector<int> result=ChangedArray(d,d.size());

    for(int i:result){
        cout<<i<<' ';
    }

    cout<<endl;

 



//    second approach 


    prefixSufix(d,5);

     for(int i:d){
        cout<<i<<' ';
    }

    cout<<endl;





     



    return 0;
}