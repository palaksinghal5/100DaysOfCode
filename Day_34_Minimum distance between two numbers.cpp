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
    for(int j=0;j<p;j++)
    {
        cin>>a[j];
    }
    
    int x,y;
    int dist = p+1;
    int diff;
    cin>>x>>y;
    int r=-(2*p);
    int q=-(2*p);
    for(int j=0;j<p;j++){
        if(a[j]==x){r=j;diff=abs(r-q); if(diff<dist){dist=diff;} }
        if(a[j]==y){q=j;diff=abs(r-q); if(diff<dist){dist=diff;} }
    }
    if(dist==p+1){cout<<"-1"<<"\n";}
    else{
    cout<<dist<<"\n";
    }  
    }

    return 0;
}

/******************************************************************************
Input--

2
6
1 2 3 2 3 1
1 3
7
86 39 90 67 84 66 62 
42 12

Output--

1
-1

*******************************************************************************/
