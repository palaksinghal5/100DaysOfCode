#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1000000],ar[100];

    for(int i=0;i<n;i++){
        cin>>a[i];
        ar[a[i]]++;
    }
    for(int i=0 ;i<100;i++){
        while(ar[i]!=0){
            cout<<i<<" ";
            ar[i]=ar[i]-1;
        }
    }

    return 0;
}
