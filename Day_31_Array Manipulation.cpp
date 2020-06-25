#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    long p,n;
    cin>>p>>n;
    long a[p]={0};
    for(long i=0;i<n;i++){
        long x,y,data;
        cin>>x>>y>>data;
        for(long j=x-1;j<=y-1;j++){
            a[j]=a[j]+data;
        }

    }

sort(a,a+p);
cout<<a[p-1];
    return 0;
    }
