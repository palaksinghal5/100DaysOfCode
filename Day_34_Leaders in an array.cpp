

#include <iostream>

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
     for(int j=0;j<p;j++)
     {
         for(int q=j+1;q<p;q++)
         {
             if(a[j]<a[q])
             {
                 break;
             }
             if(q==p-1){cout<<a[j]<<" ";}
             
         }
        
     }
      cout<<a[p-1];
     cout<<"\n";
        
    }

    return 0;
}
