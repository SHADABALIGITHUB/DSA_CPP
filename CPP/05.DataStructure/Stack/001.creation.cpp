#include<iostream> 

using namespace std;
int a[100];

class Stack{
private:
   
public:
    int index=-1;
    void push(int val){

        a[++index]=val;

        
    }

    int pop(){
        if(index==0){
            cout<<"No element in this ";
        }
       
        int val=a[index];
        index--;
        return val;


    }
    int top(){
        if(index>=0){

        return a[index];
        }
        return -1;
    }

    void printStack(){

        for(int i=0;i<=index;i++){
            cout<<a[i]<<' ';
        }
        cout<<endl;

    }
    bool isEmpty(){
        
        return index==-1;
    }


   


};


int main(){

     Stack st;
     cout<<st.index<<endl;
     st.push(23);
     cout<<st.index<<endl;
     st.push(13);
      st.printStack();
     cout<<"POP:"<<st.pop()<<endl;
     st.printStack();
     cout<<"TOP"<<st.top()<<endl;
     st.push(33);
     st.push(43);
     st.top();
     st.top();
     st.printStack();

     


     


    return 0;
}