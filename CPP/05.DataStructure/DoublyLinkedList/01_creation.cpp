#include<bits/stdc++.h>
using namespace std;

class Node{
 public :
    int data;
    Node *temp;
    Node *prev;
    Node(int val){
        data=val;
        temp=NULL;
        prev=NULL;

    }
};

void insertathead(Node* &head,int val){
    Node *n=new Node(val);
    n->temp=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}
// void insertattail(Node* &head,int val){
//     if(head==NULL){
//         insertathead(head,val);
//         return;
//     }
//     Node *n=new Node(val);
//     Node *temp=head;
//     while(temp->temp!=NULL){
//         temp=temp->temp;
//     }
//     temp->temp=n;
//     n->prev=temp;
// }
void display(Node* head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->temp;
    }
    cout<<"NULL"<<endl;
}

void insertattail(Node* &head,int val){
     if(head== NULL){
            insertathead(head,val);
            return ;
        
     }
     Node *n1=new Node(val);
     Node *temp=head;
     while(temp->temp != NULL){
  
         temp=temp->temp;
     }
       temp->temp=n1;
       n1->prev=temp;

}
void insertatposition(Node *&head,int val,int p){
    if(p==1){
            
            insertathead(head,val);
            return ;
        
     }
     Node *n1=new Node(val);
     Node *temp=head;
     int i=1;
     while(i!=p){
  
         temp=temp->temp;
         i++;
     }
       n1->temp=temp->temp; 
       temp->temp=n1;
       n1->prev=temp;
       


}
int main(){
                    
    Node *head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,4);
    insertattail(head,5);
    display(head);
    insertatposition(head,3,3);
    display(head);


                 
    return 0;
}