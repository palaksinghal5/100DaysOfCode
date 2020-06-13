#include<iostream>
using namespace std;

#define MAX_SIZE 101 
class Queue
{
public:    
int A[MAX_SIZE];
int front,rear;

Queue(){
    
    front=-1;
    rear=-1;
    
}
bool isEmpty()
{
    return( front==-1 && rear==-1);
}

bool isFull(){
    return (rear+1)%MAX_SIZE==front?true:false;
}
   
void Enqueue(int x)
{   
   if(isFull())
   {
       cout<<"Queue is Full"<<endl;
       return;
   }
   if(isEmpty())
   {
       front=rear=0;
   }
   else
   {
       rear=(rear+1)%MAX_SIZE;
       
   }
   A[rear]=x;
    
}

void Dequeue()
{
    
    if(isEmpty())
    {
        cout<<"Queue is Empty"<<endl;
        return;
    }
    else if(front==rear)
    {
        rear=front=-1;
    }
    else
    {
        front=(front+1)%MAX_SIZE;
    }
    
}

int Front()
{
    if(front==-1)
    {
        cout<<"Queue Empty"<<endl;
        return -1;
    }
    else
    {
        return A[front];
    }
}

void Print()
{
    
    int count=(rear+MAX_SIZE-front)%MAX_SIZE+1;
    cout<<"Queue: " <<" "<<endl;
    for(int i=0;i<count;i++)
    {
        int index=(front+i)%MAX_SIZE;
        cout<<A[index]<< " ";
    }
 cout<<endl;   
 
}};

int main()
{

    Queue Q;
    Q.Enqueue(2);  Q.Print();  
   Q.Enqueue(4);  Q.Print();  
   Q.Enqueue(6);  Q.Print();
   Q.Dequeue();	  Q.Print();
   Q.Enqueue(8);  Q.Print();
    return 0;
}
