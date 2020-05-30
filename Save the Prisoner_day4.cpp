#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,n,m,s,p;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>n>>m>>s;
        p=(m+s-1)%n;
        if(p==0){p=n;}
        cout<<p<<"\n";

    }

    return 0;
}
