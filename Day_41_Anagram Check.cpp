#include <iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    
    int t;//for test cases
    cin>>t;
    while(t)
    {
  string s1;
  string s2;
  cin>>s1;//for string 1
  cin>>s2;//for string 2
  sort(s1.begin(),s1.end());
  sort(s2.begin(),s2.end());
  
  if(s1.length()!=s2.length()){
      cout<<"NO"<<endl;
      
  }
  
  else{
      if(s1==s2)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
      
  }
  
    } 
   return 0;
}
