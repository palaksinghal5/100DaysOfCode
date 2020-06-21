#include<iostream>
using namespace std;

int main(){
    int n;
    int p=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        p=p+a[i];
    }

    cout<<p;
    return 0;
}
