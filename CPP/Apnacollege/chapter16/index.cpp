#include<iostream>

using namespace std;

int main(){
     
    // //  pointer for a 
    //  int a=20;
    //  int *p=&a;
    // int **p2=&p;

    //  cout<<a<<endl;
    //  cout<<&a<<endl;
    //  cout<<p<<endl;
    //  cout<<&p<<endl;
    // cout<<p2<<endl;





    //  addition in pointer 


    int a=20;
    int *p=&a;

    cout<<p<<endl;
    cout<<(++p)<<endl;
    cout<<(p++)<<endl;




    int arr[]={1,2,3,4,5};
     
    for(int i=0;i<5;i++){
        int *pointer=arr;
        cout<<(*pointer+i)<<endl;
    }



//    predict the output :
 int arr2[]={10,20,30,40};

 int *ptr=arr2;
 cout<<ptr<<endl;
 cout<<*ptr<<endl;








    return 0;
}