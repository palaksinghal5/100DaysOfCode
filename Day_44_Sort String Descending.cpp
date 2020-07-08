#include <iostream>
#include<string>
#include<functional>
#include<algorithm>

using namespace std;

int main() {
	int t;
	cin>>t;// for test cases
	while(t){
	    string s;
	    cin>>s; //for string input
	    sort(s.begin(), s.end(), greater<char>()); 
    cout<<s<<endl;
	    t--;
	}
	return 0;
}
