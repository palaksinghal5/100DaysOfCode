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
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int temp,min;
   for(int i=0;i<n;i++)
   {
       temp=i;
       for(int j=i+1;j<n;j++)
       {
           if(a[j]<a[temp])
           {
               temp=j;
           }
           
       }
       
       
       min=a[temp];
       a[temp]=a[i];
       a[i]=min;
       
       
       
   }
   cout<<"Sorted List using Selection sort is: ";
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }
    return 0;
}
