#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
      
      int p;
      cin>>p;
      int a[p];
      int count = 0;
      
      for(int j=0;j<p;j++)
      {
          cin>>a[j];
      }
      
      sort(a,a+n);
      for(int q=0;q<p;q++)
      {
          
          int k=q+2;
          for(int w=q+1;w<p;w++)
          {
              
                  while(k<p&&a[q]+a[w]>k)
                  {
                      k++;
                  }
                  if(k>w)
                  {
                      count+=k-w-1;
                  }
        
         }
    }
      
      cout<<count<<endl;
      
  }
   
   return 0;
}

/******************************************************************************
Input-->
2
3
3 5 4
5
6 4 9 7 8
Output-->
1
10
*******************************************************************************/
