#include<iostream>
using namespace std;

int main(){
    int n,p;
    cin>>n>>p;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){

        cout<<a[(i+p)%n]<<" ";
    }
    return 0;
}
