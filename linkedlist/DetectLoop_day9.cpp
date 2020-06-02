#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
struct node{
    int data;
    node* link;
};
node* head;
void Insertatend(int x){
    node* temp=new node();
    temp->data=x;
    temp->link=NULL;
    node* temp1=head;
    if(temp1==NULL){
       head=temp;
      
    }
    else{
    while(temp1->link!=NULL){
        temp1=temp1->link;
    }
    temp1->link=temp;
    }
}

void Print(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->link;
    }cout<<endl;
}

bool DetectLoop(){
    node* temp=head;
    unordered_set<node*> s;
    while(temp!=NULL){
        if(s.find(temp)!=s.end()){
            return true;
        }
        s.insert(temp);
        temp=temp->link;
    }
    return false;
}

int main(){
    head=NULL;
    Insertatend(2);
    Insertatend(3);
    Insertatend(4);
    Insertatend(5);
    head->link->link->link->link=head;
    if(DetectLoop()){
        cout<<"Loop Found";
    }
    else{
        cout<<"Loop not Found";
    }
   
}
