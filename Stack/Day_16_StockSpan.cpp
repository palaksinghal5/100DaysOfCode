#include<iostream>
#include<stack>
using namespace std;

void calculateSpan(int arr[],int n, int S[])
{
    stack<int> st;
    st.push(0);
    
    S[0]=1;
    
    for(int i=1;i<n;i++)
    {
        while(!st.empty()&&arr[st.top()]<=arr[i]){
            st.pop();
        }
        
        if(st.empty()){
            S[i]=i+1;
        }
        else{
            S[i]=i-st.top();
        }
        
        st.push(i);
    }
    
}

void PrintSpan(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }cout<<endl;
    
}
int main()
{
    int arr[]={10,4,5,90,120,80};
    int n=sizeof(arr)/sizeof(arr[0]);
    int S[n];
    calculateSpan(arr,n,S);
    
    PrintSpan(S,n);
    

    return 0;
    
}
