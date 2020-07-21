/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

struct bstnode
{
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

bstnode* Insert(bstnode* root,int data){
    if(root==NULL){
        root=Getnewnode(data);
    }
    
    else if(data<=root->data){
        root->left=Insert(root->left,data);
    }
    
    else{
        root->right=Insert(root->right,data);
    }
    
    return root;
    
}

bool Search(bstnode* root,int data){
    if(root==NULL){
        return false;
    }
    else if(root->data==data){
        return true;
    }
    else if(data<=root->data){
        return Search(root->left,data);
    }
    else{
        return Search(root->right,data);
    }
    
}

int Findmin(bstnode* root){
    if(root==NULL){
        cout<<"Tree Empty"<<endl;
        return -1;}
     if(root->left==NULL){
         return root->data;
     }   
    
    else{
        
        return Findmin(root->left);
    }
}

int Findmax(bstnode* root){
    if(root==NULL){
        cout<<"Tree Empty"<<endl;
        return -1;}
     if(root->right==NULL){
         return root->data;
     }   
    
    else{
        
        return Findmax(root->right);
    }
}

int Findheight(bstnode* root){
    if(root==NULL){
        return -1;
    }
    else{
        return max(Findheight(root->left),Findheight(root->right))+1;
    }
}

int main()
{
    bstnode* root;
    root=NULL;
    root=Insert(root,10);
    root=Insert(root,5);
    root=Insert(root,15);
    root=Insert(root,7);
    root=Insert(root,12);
    
    cout<<Findmin(root)<<endl;
    cout<<Findmax(root)<<endl;
    
    if(Search(root,11)){
        cout<<"P"<<endl;
    }
    else{
        cout<<"A"<<endl;
    }
    
    
    cout<<"Max Height of Tree is -> "<<Findheight(root)<<endl;
    
    return 0;
}
