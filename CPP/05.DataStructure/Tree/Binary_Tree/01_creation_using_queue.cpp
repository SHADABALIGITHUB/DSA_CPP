#include <bits/stdc++.h>
using namespace std;
class Tree
{

public:
    int val;
    Tree *left;
    Tree *right;

    Tree(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void createTree(Tree **root)
{

    queue<Tree *> q;
    
    q.push(*root);

    while (!q.empty()){
        Tree *n1=q.front();
        q.pop();
        cout<<"Enter the value Left of : "<<n1->val;
        int x;
        cin>>x;
        if(x!=-1){
        n1->left=new Tree(x);
        q.push(n1->left);
        }
         cout<<"Enter the value Right of : "<<n1->val;
        int y;
        cin>>y;
        if(y!=-1){

        n1->right=new Tree(y);
        q.push(n1->right);

        }



    }
}

int main()
{
    
    Tree *root=new Tree(10);
    createTree(&root);
    //   queue<Tree*> q;
    //   int x;
    //   int y;
    //   q.push(root);
    //   while (!q.empty()){


    //     Tree *n1=q.front();
    //     q.pop();
    //     cout<<"Enter the value Left of "<<n1->val;
        
    //     cin>>x;
    //     if(x!=-1){
    //     n1->left=new Tree(x);
    //     q.push(n1->left);
    //     }
    //      cout<<"Enter the value Right of "<<n1->val;
       
    //     cin>>y;
    //     if(y!=-1){

    //     n1->right=new Tree(y);
    //     q.push(n1->right);

    //     }



    //   }


    return 0;
}