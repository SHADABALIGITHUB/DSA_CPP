#include<iostream>  
#include<vector>


using namespace std;
int MajorityElementBruteForce(vector<int> &vec);
int MajorityElementsOptimal(vector<int> & vec);



int main(){
   
    vector<int> vec={1,2,3,3,3,3,3,3,1,2,2};
   
    cout<<"Brute Force Value : "<<MajorityElementBruteForce(vec)<<endl;

    cout<<"Moore's  vooting optimal :"<<MajorityElementsOptimal(vec)<<endl;





}





int MajorityElementBruteForce(vector<int> &vec){
       int n=vec.size();
       for(int i=0;i<vec.size();i++){
             int fre=1;
          for(int j=i+1;j<vec.size();j++){
                
                if(vec[i]==vec[j]){
                    fre++;
                }

          }
         
          if(fre > n/2 ){
            return vec[i];
          }
            
       }

       return -1;
}

int MajorityElementsOptimal(vector<int> & vec){
      int fre=0;
      int ans=0;

      for(int i=0;i<vec.size();i++){
            if(fre==0){
                ans=vec[i];
            }
            if(vec[i]==ans) fre++;
            else fre--;

            
      }

      return ans;
}