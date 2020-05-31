/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
  temp->data=x;
  temp->link=NULL;
  node* temp1=head;
  
  if(temp1==NULL)
  {
      head=temp;
  }
  else
  {
  
    while(temp1->link!=NULL)
    {
      temp1=temp1->link;
      
    }
    temp1->link=temp;
  } 
}

void Print(){
    node* temp=head;
    cout<<"list is ";
    while(temp!=NULL)
    {
      cout<<temp->data<<" ";
      temp=temp->link;
    }
    cout<<endl;
}
int main(){
    head=NULL;
    int n;
    cout<<"enter total numbers to be added in list:\n";
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        InsertatEnd(a);
         
    }
    int r;
    cin>>r;
    InsertatBeg(r);
    Print();
    
}
