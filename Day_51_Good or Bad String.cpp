#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t; //for test cases
	
	while(t){
	  string s;
	  cin>>s; //for string input
	  int con=0;
	  int vow=0;
	  for(int i=0;i<s.length();i++)
	  {
	      if(s[i]=='?'){
	          con++;if(con>3){break;}
	          vow++;if(vow>5){break;}
	      }
	      else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
	      {
	          vow++;
	          if(vow>5){break;}
	          con=0;
	      }
	      else
	      {
	          con++;
	          if(con>3){break;}
	          vow=0;
	      }
	  }
	  if(vow>5||con>3)
	  {
	      cout<<"0"<<endl;
	  }
	  else
	  {
	      cout<<"1"<<endl;
	  }
	  
	  t--;  
	}
	return 0;
}
