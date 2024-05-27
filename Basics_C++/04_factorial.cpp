    #include<bits/stdc++.h>
    using namespace std;
    vector<int> factors(int n){
        
        vector<int> d;
        int temp=n;
        int i=1;
        while(i<=n){
            
                if(n%i==0){

                    d.push_back(i);
                }

            i++;
            
        }
        return d;
    }
    int main(){
        
        int n=20;

        vector<int> e=factors(n);  

        for(int i=0;i<e.size();i++){
                
                cout<<e[i]<<endl;
        } 

                    
        return 0;
    }