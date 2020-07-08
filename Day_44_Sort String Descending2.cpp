#include <iostream>
#include<string>
#include<functional>
#include<algorithm>

using namespace std;

int main() {
	int t;
	cin>>t; // for test cases
	while(t){
	    string s;
	    cin>>s; // for string input
	    int count[26]={0};
	    for(int i=0;i<s.length();i++){
	        count[s[i]-'a']++;
	    }
	    
	    for(int i=25;i>=0;i--){
	        for(int j=0;j<count[i];j++){
	            cout<<(char)('a'+i);
	        }
	        
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}
