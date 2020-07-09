#include <iostream>
#include<string>

using namespace std;

int main() {
	int t;
	cin>>t; // for test cases
	getchar();
	while(t){
	    string s;
	    getline(cin,s); //for string input
	    string q="";
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]>='A'&&s[i]<='Z')
	        {
	            s[i]=s[i]-'A'+'a';
	        }
	    }
	    
	   
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]>='a'&&s[i]<='z')
	        {
	            q+=s[i];
	            
	        }
	        if(s[i]>='0'&&s[i]<='9')
	        {
	            q+=s[i];
	        }
	      
	        
	    }
	    
	    int n=q.length();
	  
	    int c=0;
    
     int i=0;
        for(int j=n-1;j>=0;j--)
        {
            if(q[i]!=q[j])
            {
                c=1;
                break;
            }
            i++;
        }
    
    if(c==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
	    
	    t--;
	}
	return 0;
}
