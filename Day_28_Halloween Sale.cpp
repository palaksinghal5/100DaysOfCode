#include<iostream>

using namespace std;

int main(){
    int p,d,m,s;
    
    int currentprice=p;
    cin>>p>>d>>m>>s;

    int count = 0;
        while(s>=p){
            count++;
            s -=p;
            p = max(p-d,m);}
            cout<<count;


  
    return 0;
}
