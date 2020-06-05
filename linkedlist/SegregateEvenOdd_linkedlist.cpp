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




void Segregate()
{
    node* end = head;
    node* previous = NULL;
    node* current = head;
    
    while (end->link != NULL)
    {
        end = end->link ;
    }
   node* new_end = end;
    
    while(current->data % 2 != 0 && current != end)
    {
        new_end->link  = current;
        current = current->link ;
        new_end->link ->link  = NULL;
        new_end = new_end->link ;
    }
 
 
    if(current->data%2 == 0)
    {
     
        head = current;
        while(current!= end)
        {
            
            if((current->data)%2 == 0)
            {
                previous = current;
                current = current->link ;
            }
            
            else
            {
                previous->link  = current->link ;
                current->link  = NULL;
                new_end->link  = current;
                new_end = current;
                current = previous->link ;
            }
        }
    }
    else previous = current;
    
    if (new_end!=end && (end->data)%2 != 0)
    {
        previous->link  = end->link ;
        end->link  = NULL;
        new_end->link  = end;
    }
    return;
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
    
    Segregate();
     cout<<"After Segregation, Linked List is: ";
    Print();
    
}
