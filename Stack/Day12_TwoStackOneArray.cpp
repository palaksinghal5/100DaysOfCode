#include <iostream>

using namespace std;

int a[10];
   int top1=-1;
   int top=10;

void push1(int x)
{
    top1=top1+1;
    a[top1]=x;
}

void pop1()
{
    top1=top1-1;
}

void IsEmpty1()
{
    if(top1==-1){
        cout<<"Stack Empty"<<endl;
        
    }
    else{
        cout<<"Stack not Empty"<<endl;
    }
}

void Top1(){
    
    cout<<"Top of Stack : "<<a[top1]<<endl;
}

void Print1(){
    cout<<"Stack: "<<endl;
    for(int i=0;i<top1+1;i++){
        
       cout<<a[i]<<endl;
   }
}




void push(int x)
{
    top=top-1;
    a[top]=x;
}

void pop()
{
    top=top+1;
}

void IsEmpty()
{
    if(top==10){
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
    for(int i=top;i<10;i++){
        
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
   
 push1(2); Print1();
   push1(5); Print1();
   push1(8); Print1();
   
   pop1();   Print1();
   pop1();   Print1();
   push1(7); Print1();
   
   Top1();
   IsEmpty1();
   
   
   
   
}
