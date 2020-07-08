#include <iostream>
#include<string>

using namespace std;

int main() {
    int t;
    cin>>t; //for test cases
    while(t){
        string s1,s2;
        cin>>s1>>s2; //for string inputs to merge
        string result="";
        
        for(int i=0;i<s1.length()||i<s2.length();i++)
        {
            
            if(i<s1.length())
            {
                result+=s1[i];
            }
            if(i<s2.length())
            {
                result+=s2[i];
            }
        }
        cout<<result<<endl;
        
        t--;
    }
	return 0;
}
