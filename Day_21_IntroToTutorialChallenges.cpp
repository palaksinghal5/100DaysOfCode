#include<iostream>
using namespace std;

int main(){
    int n,p;
    int a[10000];
    cin>>p;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==p){
            cout<<i;
            break;
        }
    }

    return 0;
}
