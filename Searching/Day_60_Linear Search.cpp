#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t){
	    int n,p;
	    int c=1;
	    int s=0;
	    int y;
	    cin>>n>>p;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]==p&&s==0){y=c;s=1;}
	        else{
	            c++;
	        }
	    }
	    if(s==0){
	    cout<<"-1"<<endl;}
	    else{
	        cout<<y<<endl;
	    }
	    
	   
	    t--;
	}
	return 0;
}
