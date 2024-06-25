#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node *prev;
        Node(int val){
            data=val;
            next=NULL;
            prev=NULL;
        }
};

void insertathead(Node*&head,int value){
      if(head==NULL){
         head->next=new Node(value);
      }
}
void display(Node* head){
    Node *temp=head;
    while(temp->next !=NULL){
         cout<<temp->data<<endl;
    }
}

int main(){
                    
    Node *head=NULL;
    
    insertathead(head,30);
    display(head);
                 
    return 0;
}