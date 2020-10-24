/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int main()
{
 
   int n;
   cin>>n;
   int flag =0;
   if(n<=0){cout<<"enter valid number";}
   else if(n==1){cout<<"neither prime nor composite";}
   else if(n==2){cout<<"Prime";}
   else{
       for(int i=2;i<=n/2;i++){
           if(n%i==0){
               flag=1;
               break;
           }
       }
       
       if(flag==0){cout<<"Prime";}
   else{
       cout<<"Not PRime";
   }
   }
   
   
   return 0;
}
