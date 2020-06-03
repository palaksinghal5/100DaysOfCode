#include<iostream>

using namespace std;
struct node{
    int data;
    node* link;
};

node* head;
node* head1;
node* head2;
node* headcommon;

void insert(node** head_ref,int x){
    node* temp=new node();
    temp->data=x;
    temp->link=*head_ref;
    *head_ref=temp;
    
}

void print(node* head_ref){
    node* temp=head_ref;
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
    head1=prev;
}
int Print(node* hed,node* hed1){
    
    node* i;
    node* j;
    
    for(i=hed,j=hed1;i!=NULL,j!=NULL;i=i->link,j=j->link)
    {
       
            if(i->data!=j->data)
            {
                cout<<"Not a Palindrome"<<endl;
                
               
            }
            else{cout<<"Palindrome"<<endl;}
            
    }
}

int main(){
    head = NULL;
    head1=NULL;
    headcommon = NULL;
    insert(&head,1);
    insert(&head,2);
    insert(&head,3);
    insert(&head,2);
    insert(&head,1);
    cout<<"Before Reverse:";
    print(head);
    Reverse();
    cout<<"After Reverse:";
    print(head1);
    Print(head,head1);
    
    
}
