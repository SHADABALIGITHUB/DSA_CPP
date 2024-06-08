#include<bits/stdc++.h>

using namespace std;

class ListNode{
   public: 
      int val;
      ListNode *next;

      ListNode(int data){
        val=data;
        next=NULL;

      };
}; 
void insertnode(ListNode* &head,int data){
    
    ListNode* n=new ListNode(data);
    n->next=head;
    head=n;
}
void display(ListNode *head){
    ListNode *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}





int main(){
  
    ListNode* head=NULL;
    insertnode(head,1);
    insertnode(head,2);
    insertnode(head,3);
    display(head);



                 
    return 0;
}
