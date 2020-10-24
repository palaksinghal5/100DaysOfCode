/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
 
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   int k;
   cin>>k;
   
   int x=0;
   
   while(k){
       for(int i=1;i<n;i++){
          if(a[x]<a[i]){
              
              x=i;
          } 
          
       }
       
       a[x]=int(sqrt(a[x]));
       cout<<a[x]<<endl;
       x=0;
       
       k--;
   }
   x=0;
   for(int i=0;i<n;i++){
      x+=a[i]; 
   }
   cout<<x;
   return 0;
}
