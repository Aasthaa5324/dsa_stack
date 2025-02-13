#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];

        // If the character is an opening bracket, push it onto the stack
        if(ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
            // If the character is a closing bracket, check if it matches the top of the stack
            if(!st.empty()) {
                char top = st.top();
                // Check if the top of the stack matches the current closing bracket
                if ((top == '(' && ch == ')') ||
                    (top == '{' && ch == '}') ||
                    (top == '[' && ch == ']')) {
                    st.pop();
                }
                else {
                    return false; // If it doesn't match, return false
                }
            }
            else {
                return false; // If the stack is empty but we encounter a closing bracket, return false
            }
        }
    }

    // At the end, the stack should be empty if the string is valid
    return st.empty();
}

int main() {
    string s = "({[]})";
    
    // Output result
    if(isValid(s)) {
        cout << "The string is valid!" << endl;
    } else {
        cout << "The string is not valid!" << endl;
    }

    return 0;
}
