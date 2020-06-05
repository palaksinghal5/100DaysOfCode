#include<iostream>
using namespace std;
struct node{
    int data;
    node* link;
};
node* head;
void Insertatend(int x){
    node* temp=new node();
    temp->data=x;
    temp->link=NULL;
    node* temp1=head;
    if(temp1==NULL){
        head=temp;
    }
    else{
        while(temp1->link!=NULL){
            temp1=temp1->link;
        }
        temp1->link=temp;
    }
    
}
void Print(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}
void DeleteatN(int x){
    if(x==1){
        node* temp=head;
        head=temp->link;
        free(temp);
        return;
    }
        
    
    node* temp =head;
    for(int i= 0;i<x-2;i++){
        temp=temp->link;
    }
    node* temp1=temp->link;
    temp->link=temp1->link;
    free(temp1);
}
int main(){
    head= NULL;
    Insertatend(2);
    Insertatend(3);
    Insertatend(4);
    Insertatend(5);
    DeleteatN(2);
    Print();
    
    
}
