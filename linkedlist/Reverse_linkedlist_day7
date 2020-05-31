#include<iostream>
using namespace std;

struct node{
    int data;
    node* link;
};
node* head;
void Insert(int n){
    node* temp=new node();
    temp->data=n;
    temp->link=NULL;
    node* temp1= head;
    if(temp1==NULL){
        head=temp;
    }
    else{
       
        while(temp1->link!=NULL){
            temp1=temp1->link;
        }temp1->link=temp;
    }
}

void Delete(int n){
    node* temp=head;
    if(n==1){
        head=temp->link;
        free(temp);
        return;
    }
    for(int i=0;i<n-2;i++){
        temp=temp->link;
    }
    node* temp1=temp->link;
    temp->link=temp1->link;
    free(temp1);
}

void Print(){
    node* temp=head;
    int p;
    while(temp!=NULL){
        
       cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}

void Reverse(){
    
    node* prev=NULL;
    node* current=head;
    node* next;
    
    while(current!=NULL){
        next=current->link;
        current->link=prev;
        prev=current;
        current=next;
        
    }
    head=prev;
}

int main(){
    head=NULL;
    Insert(2);
    Insert(3);
    Insert(4);
    Delete(3);
    Reverse();
    Print();
    
}
