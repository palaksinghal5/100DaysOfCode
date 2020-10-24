/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int main()
{
 
   string s;
   cin>>s;
   int i=0;
   int n=s.length()-1;
   int x=n-1;
   int y=0;
   int count=0;
   
   while(i<n){
      if(s[i]!=s[n]){
          
          i++;
          count++;
          y=i;
          
      } 
      else{y++;
          while(y<x){
            if(s[y]!=s[x]){
                i++;
                count++;
               break;
            }
            else{y++;x--;}
            
        
          }
      }
      
      if(y>x){
          i=n;
      }
   }
   
   cout<<count;
   return 0;
}
