#include <iostream>
using namespace std;
int main(){
long n;
cin>>n;
long rem=3;
while (n>rem){
n=n-rem;
rem*=2;}
cout<<rem-n+1;
return 0;
}
