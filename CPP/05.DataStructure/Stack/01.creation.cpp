#include<bits/stdc++.h>

using namespace std;

class Stack{
    
    private:
    vector<int> d;

    public:
    void push(int item){

        d.push_back(item);

    }
    int pop(){
        if(d.size()==0){
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
         
        int value=d[d.size()-1];
        d.pop_back();
        return value;
    }
    int top(){
        if(d.size()==0){
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        return d[d.size()-1];
    }
    bool isempty(){
        return d.size()==0;
    }
    void printStack(){
        for(int i=0;i<d.size()-1;i++){
            cout<<d[i]<<",";
        }
        cout<<d[d.size()-1]<<endl;

    }

    

};

int main(){

    Stack st;
    st.push(10);
    st.push(12);
    st.pop();
    st.push(30);
    cout<<st.top()<<endl;
    cout<<"Stack complete : ";
    st.printStack();


     



    return 0; 
}