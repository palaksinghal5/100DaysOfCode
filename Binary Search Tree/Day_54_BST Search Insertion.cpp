/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;


struct bstnode{
    int data;
    bstnode* left;
    bstnode* right;
};


bstnode* Getnewnode(int data){
    bstnode* newnode=new bstnode();
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}

bstnode* Insert(bstnode* root, int data){
    if(root==NULL){
        root=Getnewnode(data);
        
    }
    else if(data<=root->data){
        root->left=Insert(root->left,data);
        
    }
    
    else{
        root->right=Insert(root->right,data);
    }return root;
}

bool Search(bstnode* root,int data){
    if(root==NULL){return false;}
        else if(root->data==data)
        {
            return true;
        }
        else if(data<=root->data){
            return Search(root->left,data);
        }
        else{
            return Search(root->right,data);
        }
    
}

int main()
{   bstnode* root;
    root=NULL;
    root=Insert(root,10);
    root=Insert(root,5);
    root=Insert(root,15);
    if(Search(root,11)){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    
    return 0;
}
