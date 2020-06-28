

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
    
    int max=a[p-1];
    cout<< a[p-1]<<" ";
     for(int j=p-2;j>=0;j--)
     {
         if(a[j]>=max)
         {
             cout<<a[j]<<" ";
             max=a[j];
         }
        
     }
      
     cout<<"\n";
        
    }

    return 0;
}
