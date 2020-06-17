#include<iostream>
using namespace std;

int main(){
    int n;
    int a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p=a[n-1];

    for(int i=n-1;i>0;i--)
    {
        
        if(p<=a[i-1])
        {
            a[i]=a[i-1];
        }
        
        else
        {
            a[i]=p;
            for(int j=0;j<n;j++){
            cout<<a[j]<<" ";
        }cout<<"\n";
            break;
        }
        for(int j=0;j<n;j++){
            cout<<a[j]<<" ";
        }cout<<"\n";
        
    }
    if(p<a[0]){a[0]=p;
    for(int j=0;j<n;j++){
            cout<<a[j]<<" ";
        }cout<<"\n";
    }
    return 0;
}
