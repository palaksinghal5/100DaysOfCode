#include <iostream>

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
      
      for(int q=0;q<p;q++){
          for(int w=q+1;w<p;w++){
              for(int e=w+1;e<p;e++){
                  if(a[q]+a[w]>a[e]&&a[e]+a[w]>a[q]&&a[q]+a[e]>a[w]){
                      count++;
                  }
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
