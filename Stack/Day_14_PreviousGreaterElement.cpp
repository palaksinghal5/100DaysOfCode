#include <iostream>
#include<stack>
using namespace std;


void prevgreat(int arr[],int n){
    
   stack<int> s;
   s.push(arr[0]);
   cout<<-1<<", ";
   
   for(int i=1;i<n;i++){
       
       while(s.empty()==false&&s.top()<arr[i])
        {
           s.pop();
           
        }
       
       if(s.empty()==true){cout<<-1<<", ";}
       else{cout<<s.top()<<", ";}
       
       s.push(arr[i]);
   }
}



int main()
{
   int arr[]={10, 4, 2, 20, 40, 12, 30};
   int n= sizeof(arr)/sizeof(arr[0]);
   
   prevgreat(arr,n);//-1, 10, 4, -1, -1, 40, 40,
   
   return 0;
}
