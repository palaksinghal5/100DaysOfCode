#include <iostream>
#include<string>


using namespace std;

int main() {
    int t;
    cin>>t;
    getchar();
    while(t){
        string str;
        getline(cin,str);
        int n;
        cin>>n;
        
    // count spaces and find current length 
    int space_count = 0, i; 
    for (i = 0; str[i]; i++) 
        if (str[i] == ' ') 
            space_count++; 
  
    // Remove trailing spaces 
    while (str[i-1] == ' ') 
    { 
       space_count--; 
       i--; 
    } 
  
    // Find new length. 
    int new_length = i + space_count * 2 + 1; 
  
    // New length must be smaller than length 
    // of string provided. 
    
  
    // Start filling character from end 
    int index = n; 
  
    // Fill string termination. 
    str[index--] = '\0'; 
  
    // Fill rest of the string from end 
    for (int j=i-1; j>=0; j--) 
    { 
        // inserts %20 in place of space 
        if (str[j] == ' ') 
        { 
            str[index] = '0'; 
            str[index - 1] = '2'; 
            str[index - 2] = '%'; 
            index = index - 3; 
        } 
        else
        { 
            str[index] = str[j]; 
            index--; 
        } 
    } 
  
    cout<<str<<endl;

        
       
        t--;
    }
	return 0;
}
