  #include<bits/stdc++.h>
  using namespace std;
  int main(){

        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        int length=  sizeof(arr)/sizeof(arr[0]);

        for(int i=0;i<length;i++){
            for(int j=i;j<length;j++){
                        cout<<"[";
                for(int k=i;k<=j;k++){

                    cout<<arr[k]<<",";
                }
                cout<<"]"<<endl;
            }
        }
                      
   
      return 0;
  }