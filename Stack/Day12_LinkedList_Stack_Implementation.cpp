#include <iostream>

using namespace std;

struct node{
    int data;
    node* link;
};
node* head;

void push(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->link=head;
    head=temp;
}

void pop()
{
    node* temp=head;
    head=temp->link;
    free(temp);
}

void IsEmpty()
{
    if(head==NULL){
        cout<<"Stack Empty"<<endl;
        
    }
    else{
        cout<<"Stack not Empty"<<endl;
    }
}

void Top(){
    
    cout<<"Top of Stack : "<<head->data<<endl;
}

void Print(){
    cout<<"Stack: "<<endl;
    node* temp=head;
    while(temp!=NULL){
        
       cout<<temp->data<<endl;
       temp=temp->link;
   }
}

int main()
{
   
   head=NULL;
   push(2); Print();
   push(5); Print();
   push(8); Print();
   
   pop();   Print();
   pop();   Print();
   push(7); Print();
   
   Top();
   IsEmpty();
   
 
   
   
   
   
}
