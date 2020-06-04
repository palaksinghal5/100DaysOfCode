#include<iostream>

using namespace std;

struct node{
    int data;
    node* link;
};

node* head;

void Insert(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->link=head;
    head=temp;
}

void Print()
{
   node* temp=head;
   
   while(temp!=NULL)
   {    
       cout<<temp->data<<" ";
       
       temp=temp->link;
       
   }
   cout<<endl;
}

void SwapNodes(int x,int y)
{
    node* node1=head;
    node* node2=head;
    node* nodeprev1=NULL;
    node* nodeprev2=NULL;
    node* temp=NULL;
    
    if(head==NULL)
{
    return;
}

    if(x==y)
{
    return;
}    
    while(node1!=NULL&&node1->data!=x){
        nodeprev1=node1;
        node1=node1->link;
    }
    
    while(node2!=NULL&&node2->data!=y){
        nodeprev2=node2;
        node2=node2->link;
    }
    
    if(node1!=NULL&&node2!=NULL)
    {
        if(nodeprev1!=NULL)
        {
            nodeprev1->link=node2;
            
        }
        else
        {
            head=node2;
        }
        
        
        if(nodeprev2!=NULL)
        {
            nodeprev2->link=node1;
            
        }
        else
        {
            head=node1;
        }
        
        temp=node1->link;
        node1->link=node2->link;
        node2->link=temp;
        
    }
    
    else
    {
        cout<<"swapping not possible"<<endl;    
    }
    
    }

int main(){
    head=NULL;
    Insert(6);
    Insert(5);
    Insert(4);
    Insert(3);
    Insert(2);
    Insert(1);
    cout<<"Before Swapping, Linked List is: ";
    Print();
    
    SwapNodes(2,6);
     cout<<"After Swapping, Linked List is: ";
    Print();
    
}
