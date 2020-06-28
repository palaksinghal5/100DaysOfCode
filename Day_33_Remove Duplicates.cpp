

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        
        
    int p;
    cin>>p;
    int a[p];
    int x=0;
    int arr[p];
    for(int j=0;j<p;j++)
    {
        cin>>a[j];
    }
    
    for(int j=0;j<p-1;j++){
        if(a[j]!=a[j+1]){
            arr[x]=a[j];
            x++;
        }
    }
    if(a[p-1]!=arr[x-1]){
        arr[x]=a[p-1];
        x++;
    }
    
    for(int j=0;j<x;j++){
        cout<<arr[j]<<" ";
    }
    
    cout<<"\n";
    }

    return 0;
}


/******************************************************************************
Input--> 

2
5
2 2 2 2 2 
3
1 2 2

Output-->

2 
1 2 

*******************************************************************************/
