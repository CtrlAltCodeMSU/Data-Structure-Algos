#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || 
            c == '-' ||     
            c == '*' || 
            c == '/' || 
            c == '^');
}

int getPrecedence(char op) {
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    return -1;
}

string infixToPostfix(string infix) {
    stack<char> s;
    string postfix = "";
    
    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];

        if ((c >= 'a' && c <= 'z') || 
            (c >= 'A' && c <= 'Z') || 
            (c >= '0' && c <= '9')) {
            postfix += c;
        }
        else if (c == '(') {
            s.push(c);
        }
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            if (!s.empty()) 
                s.pop(); 
        }
        else if (isOperator(c)) {
            while (!s.empty() && s.top() != '(' && 
                   ((getPrecedence(s.top()) > getPrecedence(c)) || 
                    (getPrecedence(s.top()) == getPrecedence(c) &&
                     c != '^'))) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }
    
    return postfix;
}

int main() {
    string infix;
    
    cout << "Enter an infix expression: ";
    getline(cin, infix);
    
    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;
    
    return 0;
}