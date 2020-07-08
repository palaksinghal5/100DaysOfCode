#include <iostream>
#include<string>

using namespace std;

int main() {
    int t; //for test cases
    cin>>t;
    getchar();
    while(t){
        string s;
        cin>>s; //for string input
        int i;
        int count[256]={0};
        for(i=0;s[i];i++)
        {
            count[s[i]]++;    
        }
        int c=0;
        for(int i=0;i<256;i++){
            if(count[i]%2==1){
                c++;
                if(c>1){
                    cout<<"No"<<endl;
                    break;
                }
            }
        }
        
        if(c==1||c==0){
            cout<<"Yes"<<endl;
        }
        
        t--;
    }
	return 0;
}
