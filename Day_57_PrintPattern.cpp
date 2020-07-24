#include <iostream>
using namespace std;

void Pattern(int x){
    
    
    cout<<x<<" ";
    
  if(x<=0){
        
        return;
    }
    
    Pattern(x-5);
    cout<<x<<" ";
}

int main() {
    int t;
    cin>>t;
    while(t){
        int N;
        cin>>N;
        
        Pattern(N);
        cout<<"\n";
        
        
        t--;
    }
	return 0;
}
