#include<iostream>
using namespace std;
int main(){
int n,k,q,a;
int ar[100000];
cin>>n>>k>>q;
for(int i=0;i<n;i++){
    cin>>ar[i];
}
k %= n;
for(int i=0;i<q;i++){
    cin>>a;
    cout<<ar[(n-k+a)%n]<<"\n";

}
return 0;
}
