#include <iostream>
#include<stack>
using namespace std;


void prevgreat(int arr[],int n){
    
   stack<int> s;
   s.push(arr[0]);
  
   
   for(int i=1;i<n;i++){
       
       if(s.top()>arr[i])
        {
           s.push(arr[i]);
           
        }
       
       else{
           while(s.empty()==false&&s.top()<arr[i]){
               cout<<s.top()<<"->"<<arr[i]<<endl;
               s.pop();
           }
            s.push(arr[i]);
       }
      
   }
   
   while(s.empty()==false){
       
       cout<<s.top()<<"->"<<-1<<endl;
       s.pop();
   }
}



int main()
{
   int arr[]={10, 4, 2, 20, 40, 12, 30};
   int n= sizeof(arr)/sizeof(arr[0]);
   
   prevgreat(arr,n);//-1, 10, 4, -1, -1, 40, 40,
   
   return 0;
}
