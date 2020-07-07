#include <iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
 


int main() {
    int t;
    std::cin>>t;
    getchar(); 
    /*******************************
                while taking two different datatype one after the other we need to clear the inputbuffer, or we need to define the end for the cin
                here we can use getchar --> it will skip the "/n" and clear our cin for next value to be taken
                or we can use cin.ignore() -->  #include<ios> 
                                                #include<limits>
                                                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                                
                                                It will clear the input buffer before taking new line
   ****************************************/                                 
    while(t){
        
      
        
        string s;
       
       std::getline(std::cin,s);
       
        for(int i=0;i<s.length();i++)
        {
            if((i==0&&s[i]!=' ')||(s[i]!=' '&&s[i-1]==' '))
            {
                if(s[i]>='a'&&s[i]<='z')
                {
                    s[i]=s[i]+'A'-'a';
                }
            }
            else if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]=s[i]-'A'+'a';
            }
        }
        cout<<s<< endl;
        
        
        t--;
    }
}
