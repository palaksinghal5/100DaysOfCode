/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;

int lcs(string s1,string s2, int m,int n){
    
    int L[m+1][n+1];
    int i,j;
    
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            
            if(i==0||j==0){
                L[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1]){
                L[i][j]=L[i-1][j-1]+1;
            }
            else{
                L[i][j]=max(L[i-1][j],L[i][j-1]);
            }
        }
    }
    
    return L[m][n];
    
}


int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
    
}

int main()
{
    string s1,s2;
    
    cin>>s1;
    cin>>s2;
    
    int m=s1.length();
    int n=s2.length();
    
    cout<<lcs(s1,s2,m,n);

    return 0;
}
