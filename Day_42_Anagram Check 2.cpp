#include <iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    
    int t;// for test cases
    cin>>t;
    while(t)
    {
  string s1;
  string s2;
  
  cin>>s1;// for string 1
  cin>>s2;// for string 2
  
  int count1[256]={0};
  int count2[256]={0};
  int i;
  
  for(i=0;s1[i]&&s2[i];i++)
  {
      count1[s1[i]]++;
      count2[s2[i]]++;
  }
  if(s1[i]||s2[i])
  {
      cout<<"NO"<<endl;
      
  }
  else
  {
    for(i=0;i<256;i++)
    {
      
      if(count1[i]!=count2[i])
      {
          cout<<"NO"<<endl;
          break;
      }
  
    }
    if(i==256)
    {
      cout<<"YES"<<endl;
    }
  } 
  t--;
    } 
   return 0;
}
