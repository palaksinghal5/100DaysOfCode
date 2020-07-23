/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <queue>
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

bstnode* Findmin(bstnode* root){
    while(root->left!=NULL){root=root->left;}
    return root;
     
}

bstnode* Delete(bstnode* root,int data){
    if(root==NULL){return root;}
    else if(data<=root->data){root->left=Delete(root->left,data);}
    else if(data>root->data){root->right=Delete(root->right,data);}
    else{
        //Case1 : 0 child
        
        if(root->left==NULL&&root->right==NULL)
        {
            delete root;
            root=NULL;
        }
        
        //Case2 : 1 child
        else if(root->left==NULL){
            bstnode* temp=root;
            root=root->right;
            delete temp;
        }
        
        else if(root->right==NULL){
            bstnode* temp=root;
            root=root->left;
            delete temp;
        }
        //Case : 2 child
        else{
            bstnode* temp=Findmin(root->right);
            root->data=temp->data;
            root->right=Delete(root->right,temp->data);
        }
    }
    
    return root;
}
void Preorder(bstnode* root){
    
    if(root==NULL){return;}
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

bstnode* Find(bstnode* root,int data){
    
    if(root==NULL){return NULL;}
    else if(root->data == data) return root;
	else if(root->data < data) return Find(root->right,data);
	else return Find(root->left,data);
    
}

bstnode* GetSuccessor(bstnode* root,int data){
    //Search node-O(H)
    
    bstnode* current=Find(root,data);
    if(current==NULL){
        return NULL;
    }
    //Case1 : If node has right subtree
    if(current->right!=NULL){
        bstnode* temp=current->right;
        while(temp->left!=NULL){temp=temp->left;}
        return temp;
    }
    //Case2 : No Right subtree
    else{
        bstnode* successor=NULL;
        bstnode* ancestor=root;
        while(ancestor!=current){
            if(current->data<ancestor->data){
                successor=ancestor;
                ancestor=ancestor->left;
            }
            else{
                ancestor=ancestor->right;
            }
            return successor;
        }
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
    
   struct bstnode* successor = GetSuccessor(root,5);
	if(successor == NULL) cout<<"No successor Found\n";
	else
    cout<<"Successor is "<<successor->data<<"\n";
    
  cout<<"Preorder Traversal is -> ";Preorder(root);cout<<endl;
    
    root=Delete(root,10);
    
  cout<<"Preorder Traversal is -> ";Preorder(root);cout<<endl;   
   
    
    return 0;
}
