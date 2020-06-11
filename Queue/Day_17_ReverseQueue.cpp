#include<iostream>
#include<queue>
#include<stack>

using namespace std;

void ReverseQueue(queue<int>& Queue){
    
    stack<int> Stack;
    while(Queue.empty()==false){
        Stack.push(Queue.front());
        Queue.pop();
    }
    
    while(Stack.empty()==false){
        Queue.push(Stack.top());
        Stack.pop();
    }
}

void Print(queue<int>& Queue){
    while(Queue.empty()==false){
        cout<<Queue.front()<<" ";
        Queue.pop();
    }
}


int main(){
    
    queue<int> Queue;
    Queue.push(10); 
    Queue.push(20); 
    Queue.push(30); 
    Queue.push(40); 
    Queue.push(50); 
    Queue.push(60); 
    Queue.push(70); 
    Queue.push(80); 
    Queue.push(90); 
    Queue.push(100); 
    
    
    ReverseQueue(Queue);
    Print(Queue);
    
    return 0;
}
