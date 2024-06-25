#include<bits/stdc++.h>
using namespace std;

int removeDuplicatesfast(std::vector<int>& vect2) {
    if (vect2.empty()) return 0;
    
    auto end = std::unique(vect2.begin(), vect2.end());
    vect2.erase(end, vect2.end());
    
    return vect2.size();

}

int removeDuplicates(std::vector<int>& vec) {
    if (vec.empty()) return 0;
     int n=vec.size();
     int j=1;
     for(int i=1;i<n;i++){
         if(vec[i] != vec[i-1]){
             vec[j]=vec[i];
             j++;
         }
     }

     return j;

}



int main(){

    std::vector<int> vec = {1, 2, 2, 3, 4, 4, 4, 5, 6, 6};
    
    std::cout << "Original vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
   int p=removeDuplicates(vec);
    
    std::cout << "Vector after removing duplicates: ";
    for (int i=0;i<p;i++) {
        std::cout << vec[i]<< " ";
    }
    std::cout << std::endl;
    std::vector<int> vect2 = {1, 2, 2, 3, 4, 4, 4, 5, 6, 6};

    cout<<"size"<<removeDuplicatesfast(vect2)<<endl;
    
    std::cout << "Vector after removing duplicates: ";
    for (int num : vect2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
   
     
                 
    
}