#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int count=0;
   int p,j,h,x;
   for(int i=0;i<n;i++)
   {
       
      
       cin>>p;
      
       int a[p];
       
       for(j=0;j<p;j++)
       {
           cin>>a[j];
       }
      
    
       for(j=0;j<ceil(p/2);j++)
       {    count=0;
           x=a[j];
           for(h=j;h<p;h++)
           {
               if(x==a[h])
               {
                   count=count+1;
                  
               }
           }
           if(count>ceil(p/2))
           {
               cout<<x<<endl;
              break;        
               
           }
           
       }
       
      if(count<=ceil(p/2)){
           cout<<"-1"<<endl;
       }  
       
   }
   
   
   return 0;
}
