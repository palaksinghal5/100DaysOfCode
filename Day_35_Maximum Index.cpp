#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       int p;
       cin>>p;
       int a[p];
       int max=INT_MIN;
       int t;
       for(int j=0;j<p;j++){
           cin>>a[p];
           if(a[p]>max){
               max=a[p];
               t=j+1;
           }
           
       }
       cout<<t<<"\n";
   }
   
   
   return 0;
}

/******************************************************************************

Input-->

2
9
34 8 10 3 2 80 30 33 1
4
12 15 3 16

Output-->

6
4

*******************************************************************************/
