#include<iostream>
using namespace std;

int main(){

    int n,p;
    int arr[1000];
    int left[1000],right[1000],equal[1000];
    int l=0;
    int r=0;
    int e=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i==0){
            p=arr[i];
        }
        if(arr[i]==p){
            equal[e]=arr[i];
            e++;
        }
        else if(arr[i]<p){
            left[l]=arr[i];
            l++;
        }
        else {
        right[r]=arr[i];
            r++;
        }
    }

    for(int i=0;i<l;i++){cout<<left[i]<<" ";}
    for(int i=0;i<e;i++){cout<<equal[i]<<" ";}
    for(int i=0;i<r;i++){cout<<right[i]<<" ";}
}
