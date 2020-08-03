/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  int m,n;
  cin>>m>>n;
  int ar1[m],ar2[n];
  for(int i=0;i<m;i++){
      cin>>ar1[i];
  }
  for(int i=0;i<n;i++){
      cin>>ar2[i];
  }
  int i,j;
  for(i=n-1;i>=0;i--)
  {
      int j,last=ar1[m-1];
      
      for(j=m-2;j>=0&&ar1[j]>ar2[i];j--)
      {
          ar1[j+1]=ar1[j];
      }
      if(j!=m-2||last>ar2[i]){
          ar1[j+1]=ar2[i];
          ar2[i]=last;
      }
      
  }
 for(int i=0;i<m;i++){
      cout<<ar1[i]<<" ";
  }
  cout<<endl;
  for(int i=0;i<n;i++){
      cout<<ar2[i]<<" ";
  } 

    return 0;
}
