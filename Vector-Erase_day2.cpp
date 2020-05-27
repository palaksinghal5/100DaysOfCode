#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int m,n,a,i;
   vector<int>v;
   cin>>n;
   for(i=0;i<n;i++){
       cin>>m;
       v.push_back(m);

   } 
   cin>>a;

   v.erase(v.begin()+a-1);
   cin>>a>>m;
   
   v.erase(v.begin()+a-1,v.begin()+m-1);
   cout<<v.size()<<"\n";
   for(i=0;i<v.size();i++){
       
       cout<<v[i]<<" ";
   }
    return 0;
}
