#include<bits/stdc++.h>

using namespace std;

int arr[30];
int val=0;
int start=0;

class Queue{

  public:  Queue(){
          
            }
         void insert(int data);

         int pop();

         void printQueue();

         int front();


};

void Queue::insert(int data){

       if(val==30){
         return;
       }

      arr[val]=data;
      val=val+1;

    

}
int Queue::pop(){

    if(start==val){
        return -1;
    }

    int val=arr[start];

    start=start+1;

    return val;
     
}

void Queue::printQueue(){
    for(int i=start;i<val;i++){
        cout<<arr[i]<<endl;
    }
}

int Queue::front(){
    if(start==val){
        return -1;
    }
    int val=arr[start];
    
    return val;
}



int main(){

    Queue ob;

    ob.insert(45);
    ob.insert(5);
    ob.insert(435);
    ob.insert(65);
    ob.insert(90);
    ob.printQueue();
   cout<<"front is :"<<ob.front()<<endl;

    ob.pop();
    ob.pop();
    
    cout<<"front is :"<<ob.front()<<endl;



    return 0;
}

