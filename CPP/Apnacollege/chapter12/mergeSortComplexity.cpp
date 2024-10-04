#include<iostream>
#include<vector>


using namespace std;



void merge(vector<int> &arr,int s,int mid,int e){
     
      
        vector<int> d;
        int i=s;
        int j=mid+1;


        while(i<=mid && j<=e){
             if(arr[i]<=arr[j]){
                d.push_back(arr[i]);
                i++;
             }
             else{
                d.push_back(arr[j]);
                j++;
             }
        }

        while(i<=mid){
            d.push_back(arr[i]);
            i++;
        }
        while(j<=e){
            d.push_back(arr[j]);
            j++;
        }

        int k=0;

        for(int i=s;i<=e;i++){

            arr[i]=d[k];
            k++;
        }

        d.clear();










}

void mergesort(vector<int> & d,int s,int e){

    int mid=(s+e)/2;

    if(s>=e){

        return ;

    }

        mergesort(d,s,mid);
        mergesort(d,mid+1,e);

        merge(d,s,mid,e);

    
}



int main(){

     vector<int> arr={3,2,8,5,12,4};

     mergesort(arr,0,arr.size()-1);

     for(int i:arr){
        cout<<i<<endl;
     }

    //  cout<<arr[0]<<endl;




    return 0;
}