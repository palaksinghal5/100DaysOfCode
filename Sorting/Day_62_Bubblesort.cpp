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
   for(int i=0;i<n-1;i++)
   {
       for(int j=0;j<n-i-1;j++)
       {
           if(a[j+1]<a[j])
           {
               temp=a[j+1];
               a[j+1]=a[j];
               a[j]=temp;
           }
           
       }
       
       
   }
   cout<<"Sorted List using Bubble sort is: ";
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }
    return 0;
}
