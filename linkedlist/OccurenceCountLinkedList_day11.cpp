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

void Print(int x)
{
   node* temp=head;
   int cnt=0;
   while(temp!=NULL)
   {
       if(temp->data==x)
       {
           cnt++;
       }
       
       temp=temp->link;
       
   }
   cout<<"count of "<<x<<" in the linked list is "<<cnt<<endl;
}

int main(){
    head=NULL;
    Insert(6);
    Insert(5);
    Insert(6);
    Insert(4);
    Insert(6);
    Insert(1);
    
    
    Print(6);
    
}
