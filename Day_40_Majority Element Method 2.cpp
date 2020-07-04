#include <iostream>
#include<cmath>
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
       
       int x=a[0];
       int count=0;
       for(int j=0;j<p;j++)
       {
           if(x==a[j]){count++;if(count>p/2){cout<<x<<endl;break;}}
           else{x=a[j];count=1;}
          
       }
       if(count<=p/2){
           cout<<"-1"<<endl;
       }
       
   }
   
   
   return 0;
}

/******************************************************************************
Input-->
2
5
3 1 3 2 3
3
1 2 3
Output-->
3
-1

*******************************************************************************/
