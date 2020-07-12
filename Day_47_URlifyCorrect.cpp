/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t){
        string s;
        cin.ignore();
        getline(cin,s);
        
        int n;
        cin>>n;
        int count=n;
        
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                count--;
            }
            else{break;}
        }
        
        int a=0; 
        
        for(int i=0;i<count;i++)
        {
            if(s[i]==' '){
                a++;
            }
        }
       
        int b=count+(2*a)-1;
        
        
        
        char res[b];
        int index=0;
        for(int i=0;i<count;i++){
            if(s[i]==' '){
                res[index]='%';
                res[index+1]='2';
                res[index+2]='0';
                
                index+=3;
            }
            else{
                res[index]=s[i];
                index+=1;
            }
        }
        
        for(int i=0;i<=b;i++)
        {
            cout<<res[i];
        }
        
        t--;
       cout<<endl; 
    }


    return 0;
}
