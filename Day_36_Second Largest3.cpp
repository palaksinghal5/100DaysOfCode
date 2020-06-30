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
           if(a[j]>first){
               second=first;
               first=a[j];
           }
           else if(a[j]>second&&a[j]!=first){
               second=a[j];
           }
           
       }
       
       
       
       cout<<second<<"\n";
       
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
75
56
*******************************************************************************/
