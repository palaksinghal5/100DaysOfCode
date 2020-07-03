#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  
  int smaller[n];
  int greater[n];
  smaller[0]=-1;
  int min=0;
  for(int i=1;i<n;i++)
  {
      if(a[i]<=a[min])
      {
          min=i;
          smaller[i]=-1;
          
      }
      else
      {
          smaller[i]=min;
      }
  }
  
  greater[n-1]=-1;
  int max=n-1;
  for(int i=n-2;i>=0;i--)
  {
      if(a[i]>a[max])
      {
          max=i;
          greater[i]=-1;
      }
      else
      {
          greater[i]=max;
      }
  }
  
  for(int i=0;i<n;i++){
      if(smaller[i]!=-1&&greater[i]!=-1){
          cout<<a[smaller[i]]<<" "<<a[i]<<" "<<a[greater[i]]<<endl;
      }
  }
  
   return 0;
}

/******************************************************************************
Input-->
7
12 11 10 5 6 2 30
Output-->
5 6 30
*******************************************************************************/
