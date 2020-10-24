/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

bool checkpalindrome(string s, int i, int n){
    while(i<n){
    if(s[i]!=s[n]){
        return false;
    }
    i++;
    n--;
    }
    return true;
}

int main()
{
 
   string s;
   cin>>s;
   int i=0;
   int n=s.length();
   for(i=0;i<n;i++){
       if(checkpalindrome(s,i,n-1)){
           break;
       }
   }
   cout<<i;
   
   return 0;
}
