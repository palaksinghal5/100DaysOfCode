#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[10000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
int p;
int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
            
        }  
        arr[j + 1] = key;  
        for (int x = 0; x < n; x++){  
        cout << arr[x] << " ";  }
        cout << "\n"; 
    } 

    return 0;
}
