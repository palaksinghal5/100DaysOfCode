#include<iostream>

using namespace std;
struct node{
    int data;
    node* link;
};

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

void commoninsert(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->link=headcommon;
    headcommon=temp;
}

int main(){
    head1 = NULL;
    head2 = NULL;
    headcommon = NULL;
    insert(&head1,6);
    insert(&head1,4);
    insert(&head1,3);
    insert(&head1,2);
    insert(&head1,1);
    print(head1);
    insert(&head2,8);
    insert(&head2,6);
    insert(&head2,4);
    insert(&head2,2);
    print(head2);
    
    node* i;
    node* j;
    for(i=head1;i!=NULL;i=i->link)
    {
        for(j=head2;j!=NULL;j=j->link)
        {
            if(i->data==j->data)
            {
                commoninsert(i->data);
            }
        }
    }
    print(headcommon);
    
}
