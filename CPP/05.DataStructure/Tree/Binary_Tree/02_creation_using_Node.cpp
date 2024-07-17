#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Tree{
  public:
    int data;
    Tree* left;
    Tree* right;

    Tree(int data){
        this->data=data;
        this->left=  NULL;
        this->right= NULL;

    }
};

Tree *buildTree(Tree*root){

      int data;
      cout<<": data ->";
      cin>>data;
      root=new Tree(data);
      if(data==-1){
        return NULL;
      }

      cout<<"Enter data at left";
      root->left=buildTree(root->left);
       cout<<"Enter data at right";
      root->right=buildTree(root->right);

      return root;


     
}

void printTree(Tree*root){
     
     if(root== NULL){
          return;
     }

       cout<<root->data<<"->";
      printTree(root->left);

     

      printTree(root->right);

      
}

int main(){

    
Tree* root= NULL;
root=buildTree(root);

printTree(root);


    return 0;
}