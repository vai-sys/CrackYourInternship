#include<iostream>
#include<stack>
#include<string>
using namespace std;



    bool isValid(string s) {
        stack<char> st;
        for (auto ch : s) {
         
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
            
              
                if (ch == ')' && st.top() != '(') return false;
                if (ch == '}' && st.top() != '{') return false;
                if (ch == ']' && st.top() != '[') return false;
     
                st.pop();
            }
        }
       
        return st.empty();
    }

    int main(){
        string s;
        cout<<"Enter the String"<<endl;
        cin>>s;
        bool ans=isValid(s);
        if(ans){
            cout<<"String is Valid";
        }
        else{
            cout<<"string is not valid";
        }
        return 0;
    }
