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
    cout<<"Linked List is: ";
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
void Count(){
    node* temp=head;
     int x;
    while(temp!=NULL){
        temp=temp->link;
        x++;
    }
    
    node* temp1=head;
    int y=x/2;
    cout<<"Middle element of linkedlist is : ";
    if(x%2==0){
        for(int i=0;i<y-1;i++){
            temp1=temp1->link;
        }
        cout<<temp1->data<<" ";
        temp1=temp1->link;
        cout<<temp1->data<<"\n";
        return;
    }
    
    
  
        for(int i=0;i<y;i++){
            temp1=temp1->link;
        }cout<<temp1->data<<"\n";
        
     
    
}

void Delete(){
    node* temp=head;
    node* temp1=head;
    while(head!=NULL){
        head=temp->link;
       free(temp);
       temp=head;
    }
    
}
void Sort(){
    
    node* temp1=head;
    node* temp2;
    int duplicate;
    if(temp1==NULL){
        return;
    }
    while(temp1!=NULL)
    {   temp2=temp1->link;
    
        while(temp2!=NULL)
        {
            if(temp1->data>temp2->data)
            {
                duplicate=temp1->data;
                temp1->data=temp2->data;
                temp2->data=duplicate;
            }
            
            
            
            temp2=temp2->link;
            
            
        }
     temp1=temp1->link;    
        
    }
    
}

int main(){
    head=NULL;
    Insert(9);
    Insert(7);
    Insert(4);
    Insert(8);
    Insert(6);
    Insert(7);
    
    Print();
    Sort();
    Print();
    
}
