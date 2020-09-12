 #include<iostream>
using namespace std;

string x,y;

int lcs(int i,int j,int count){
    
    if(i==0||j==0){
        return count;
    }
    
    if(x[i-1]==y[j-1]){
        count=lcs(i-1,j-1,count+1);
    }
    
    count=max(count,max(lcs(i-1,j,0),lcs(i,j-1,0)));
    
    return count;
}

int main(){
    string s1,s2;
    
    cin>>s1>>s2;
    x=s1;
    y=s2;
    int i=x.length();
    int j=y.length();
    
    cout<<lcs(i,j,0);
    return 0;
}

