#include<iostream>
using namespace std;

int main(){
    int n,c;
    int a[1000];
    int p=1000;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j])
            {
                c=j-i;
                if(c<p)
                {
                    p=c;
                }
            }
        }
    }

    if(p==1000){cout<<-1;}
    else{cout<<p;}
    return 0;
}
