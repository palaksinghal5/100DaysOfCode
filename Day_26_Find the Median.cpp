#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n,temp;
    cin>>n;
    int a[1000001];
    for(int i=0;i<n;i++){

        cin>>a[i];
    }

    sort(a,a+n);
    
    cout<<a[n/2];
}
