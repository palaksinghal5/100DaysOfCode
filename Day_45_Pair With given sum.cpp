#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int sum;
    cin>>sum;
    
    int c=0;
    
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i]+a[j] == sum)  
            {cout<<a[i]<<" "<<a[j]<<" "<<sum<<endl; c=1;}
        }
    } 
    if(c==0){
        cout<<"-1"<<endl;
    }
    
    
    
    t--;
}
	return 0;
}
