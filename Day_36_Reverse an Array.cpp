#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int p;
       cin>>p;
       int a[p];
       int first=INT_MIN;
       int second=INT_MIN;
       for(int j=0;j<p;j++)
       {
           cin>>a[j];
           
       }
       int start=0;
       int end=p-1;
       int temp;
       while(start<end){
           temp=a[start];
           a[start]=a[end];
           a[end]=temp;
           start++;
           end--;
       }
       
       
       for(int j=0;j<p;j++){
       cout<<a[j]<<" ";
       }
       cout<<"\n";
   }
   
   return 0;
}

/******************************************************************************
Input-->

2
5
89 24 75 11 23
6
56 42 21 23 65 20

Output-->

23 11 75 24 89 
20 65 23 21 42 56 
*******************************************************************************/
