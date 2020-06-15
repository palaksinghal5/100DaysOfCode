#include<iostream>
using namespace std;

struct node{
    
    int data;
    node* link;
};
node* head;

void InsertatBeg(int x){
    
    node* temp=new node();
    temp->data=x;
    temp->link=head;
    head=temp;
    
}

void InsertatEnd(int x){
    
    node* temp=new node();
    node* temp1=head;
    temp->data=x;
    temp->link=NULL;
    if(temp1==NULL){
        
        head=temp;
    }
    else{
    while(temp1->link!=NULL)
    {
        temp1=temp1->link;
    }
    temp1->link=temp;
    }   
}

void DeleteatN(int x){
    
    node* temp=head;
    node* temp1;
    for(int i=0;i<x-2;i++){
        temp=temp->link;
    }
    temp1=temp->link;
    temp->link=temp1->link;
    free(temp1);
}

void InsertatN(int n,int x){
    node* temp=new node();
    temp->data=x;
    node* temp1=head;
    for(int i=0;i<n-2;i++){
        temp1=temp1->link;
        
    }
    temp->link=temp1->link;
    temp1->link=temp;
    
}


void Print(){
    
    node* temp=head;
    cout<<"LinkedList is: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}

void LengthPrint(){
    node* temp=head;
    int c=0;
    while(temp!=NULL){
        temp=temp->link;
        c++;
    }
    cout<<"Length of LinkedList: "<<c<<endl;
    
}

void MiddleElementPrint(){
    node* temp=head;
    node*temp1=head;
    int c;
    while(temp!=NULL){
        temp=temp->link;
        c++;
    }
    
   int y=c/2;
 
    for(int i=0;i<y;i++){
        temp1=temp1->link;
    }
    cout<<"Middle Element: "<<temp1->data<<endl;
}

void Reverse(){
    
    node* prev=NULL;
    node* curr=head;
    node* next;
    while(curr!=NULL)
    {
        next=curr->link;
        curr->link=prev;
        prev=curr;
        curr=next;
    }
    
    head=prev;
    cout<<"Reversed ";
}

int main()
{
    head=NULL;
    InsertatBeg(2); Print();
    InsertatBeg(3); Print();
    InsertatBeg(4); Print();
    
    InsertatEnd(5); Print();
    
    InsertatBeg(6); Print();
    InsertatBeg(7); Print();
    
    InsertatEnd(8); Print();
    
    InsertatN(2,9); Print();
    
    DeleteatN(3); Print();
    
    LengthPrint();
    
    MiddleElementPrint();
    
    Reverse(); Print();
    
    return 0;
}
