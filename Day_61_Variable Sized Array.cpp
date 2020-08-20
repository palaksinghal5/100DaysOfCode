/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n; int s=0;
    int q;
    cin>>n>>q;
    int* arr[n];
    while(n--)
    {
        int x;
        cin>>x;

        arr[s]=new int[x];
        for(int i=0;i<x;i++){
            cin>>arr[s][i];
        }
    s++;
    }

    while(q--){

        int a,b;
        cin>>a>>b;

       cout<<arr[a][b]<<endl; 
    }
    return 0;
}
