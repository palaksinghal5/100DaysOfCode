#include <iostream>
#include<string>
#include<sstream>
using namespace std;

int main() {
	int t;
	cin>>t;//for test case
	while(t){
	    
	    string s;
	    cin>>s;//for string input
	    string res="";
	    int p=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]>='0'&&s[i]<='9')
	        {
	            res+=s[i];
	        }
	        else
	        {
	           stringstream geek(res);
	           int x=0;
	           geek>>x;
	           if(x>p)
	           {
	               p=x;
	           }
	           res.clear();
	        }
	        
	        
	    }
	    stringstream geek(res);
	           int x=0;
	           geek>>x;
	           if(x>p)
	           {
	               p=x;
	           }
	    cout<<p<<endl;
	    t--;
	}
	return 0;
}
