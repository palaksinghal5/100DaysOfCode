#include <iostream>
using namespace std;
void insertionsort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int val = arr[i];
        int hole = i;
        while(hole>0 && arr[hole-1]>val)
        {
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole]=val;
    }
}
void closest(int arr[], int n)
{
    insertionsort(arr,n);
    int min = arr[1] - arr[0];
    for(int i=1;i<n;i++)
    {
        int currmin = abs(arr[i]-arr[i-1]);
        if(currmin<min)
        {
            min=currmin;
        }
    }
    for(int i=1;i<n;i++)
    {
        if(abs(arr[i]-arr[i-1])==min)
        {
            cout<<arr[i-1]<<" "<<arr[i]<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    closest(arr,n);
}
