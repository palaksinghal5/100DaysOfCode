#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    char c;
	cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<"\n"<<a+b<<"\n";
    c=a[0];
    a[0]=b[0];
    b[0]=c;
    cout<<a<<" "<<b;


  
    return 0;
}
