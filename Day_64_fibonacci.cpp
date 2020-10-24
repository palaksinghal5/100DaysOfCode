/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int sum=0,a,b;
   a=0;
   b=1;
   int n;
   cin>>n;
   if(n==2){return 1;}
   if(n==0||n==1){return 0;}
   
   for(int i=3;i<=n;i++){
       sum=a+b;
       
       a=b;
       b=sum;
       
   }
   
    cout<<sum;
    return 0;
}
