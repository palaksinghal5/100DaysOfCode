#include <iostream>
#include<stack>
#include<string>

using namespace std;


bool ArePair(char opening,char closing)
{
    if((opening=='(')&&(closing==')'))return true;
    if((opening=='{')&&(closing=='}'))return true;
    if((opening=='[')&&(closing==']'))return true;
    return false;
}

bool AreParanthesesBalanced(string expr)
{
    stack<char> S;
    for(int i= 0;i<expr.length();i++)
    {
        if(expr[i]=='('||expr[i]=='['||expr[i]=='{')
        {
            S.push(expr[i]);
        }
        else if(expr[i]==')'||expr[i]==']'||expr[i]=='}')
        {
            if(S.empty()||!ArePair(S.top(),expr[i]))
            {
                return false;
            }
            else
            {
               S.pop(); 
            }
        }
    } 
        return S.empty()? true:false;
}

int main()
{
   
  string expression;
  cin>>expression;
  if(AreParanthesesBalanced(expression)){
      cout<<"Balanced";
  }
  else{
      cout<<"Not Balanced";
  }
   
 
   
   
   
   
}
