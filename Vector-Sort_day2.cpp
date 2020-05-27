#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n,m;
   cin>>n;
   vector<int>v;
   
   for(int i=0;i<n;i++){
       cin>>m;
        v.push_back(m);
   }  
   sort(v.begin(),v.end());
   for(int i=0;i<n;i++){
       cout<<v[i]<<" ";
   }
    return 0;
}
