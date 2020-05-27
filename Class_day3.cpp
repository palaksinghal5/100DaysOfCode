#include <iostream>
#include <sstream>
#include<string>
using namespace std;

class Student{
    public:
    int val,val1;
    string str,str1;
    void set_age(int a){
        val=a;
    }
    void set_standard(int a){
        val1=a;
    }
    void set_first_name(string b){
        str=b;
    }
    void set_last_name(string b){
        str1=b;
    }
    int get_age() {
            return val;
        }
    int get_standard() {
            return val1;
        }
    string get_first_name() {
            return str;
        } 
    string get_last_name() {
            return str1;
        }             
    string to_string(){

        stringstream ss;
        char c=',';
        ss<<val<<c<<str<<c<<str1<<c<<val1;
        return ss.str();

    }
    


};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
