#include <iostream>

using namespace std;

int a[10];
   int top=-1;

void push(int x)
{
    top=top+1;
    a[top]=x;
}

void pop()
{
    top=top-1;
}

void IsEmpty()
{
    if(top==-1){
        cout<<"Stack Empty"<<endl;
        
    }
    else{
        cout<<"Stack not Empty"<<endl;
    }
}

void Top(){
    
    cout<<"Top of Stack : "<<a[top]<<endl;
}

void Print(){
    cout<<"Stack: "<<endl;
    for(int i=0;i<top+1;i++){
        
       cout<<a[i]<<endl;
   }
}

int main()
{
   
   
   push(2); Print();
   push(5); Print();
   push(8); Print();
   
   pop();   Print();
   pop();   Print();
   push(7); Print();
   
   Top();
   IsEmpty();
   
 
   
   
   
   
}
