#include <iostream>
#include<algorithm>
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
       for(int j=0;j<p;j++)
       {
           cin>>a[j];
       }
       sort(a,a+p);
       int max=a[p-1];
       for(int j=p-1;j>=0;j--){
           if(max!=a[j]){
               cout<<a[j]<<"\n";
               break;
           }
       }
       
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
