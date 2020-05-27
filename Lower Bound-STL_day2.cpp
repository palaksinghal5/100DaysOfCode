#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int m,n,a;
   cin>>n;
   vector<int> v;
   for(int i=0;i<n;i++){
       cin>>m;
       v.push_back(m);
   } 

   cin>>m;
   for(int i=0;i<m;i++){
       cin>>a;
      vector<int>::iterator low = lower_bound(v.begin(), v.end(), a);
       if (v[low- v.begin()] == a)
           cout << "Yes " << (low - v.begin()+1) << endl;
       else
           cout << "No " << (low - v.begin()+1) << endl;
   }
   return 0;
}
