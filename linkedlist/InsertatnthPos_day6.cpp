#include<iostream>
using namespace std;

struct node{
    int data;
    node* link;
};
node* head;
void InsertatN(int x, int n){
    node* temp=new node();
    temp->data=x;
    temp->link=NULL;
    if(n==1){
        node* temp1=head;
        head=temp;
        temp->link=temp1;
        return;
    }
    node* temp1=head;
    for(int i= 0;i<n-2;i++){
        temp1=temp1->link;
        
    }
    temp->link=temp1->link;
    temp1->link=temp;
}
void Print(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}

int main(){
    head=NULL;
    InsertatN(2,1);
    InsertatN(3,2);
    InsertatN(4,1);
    InsertatN(5,2);//4 5 2 3
    Print();
    
    
}
