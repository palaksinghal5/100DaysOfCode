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
            node* temp1=temp;
            temp1=temp1->link;
            int count=0;
            count++;
            while(temp != temp1)
        {
            temp1 = temp1->link;
            count++;
        }
           cout<<count<<endl;
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
    Insertatend(6);
    
    head->link->link->link->link=head;
    if(DetectLoop()){
        cout<<"Loop Found";
    }
    else{
        cout<<"Loop not Found";
    }
    
    
   
}
