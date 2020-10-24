/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int sum=0;

int fibonacci(int n){
    if(n<=1){return n;}
   else{
       return fibonacci(n-1)+fibonacci(n-2);
   }

    
}

int main()
{
 
   int n;
   cin>>n;
   
   int x=fibonacci(n);
   cout<<x;
   
}
