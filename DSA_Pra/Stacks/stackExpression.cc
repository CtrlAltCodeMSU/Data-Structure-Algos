#include <iostream>
#include <cmath>
#include <stack>
#include <sstream>
using namespace std;
int performOperation(int operand1 , int operand2 , char operation){
    switch (operation){
    case '+' :
        return operand1 + operand2 ;
    case '-' :
        return operand1 - operand2 ;    
    case '*' :
        return operand1 * operand2 ;
    case '^' :
        return pow(operand1, operand2) ;
    case '/' :
        if(operand2==0){
            cerr << "Error: Division by zero!" << endl;
            exit(EXIT_FAILURE);
        }else{
            return operand1 - operand2 ;
        }
        break;
    default:
        cerr << "Error: Invalid Operation " << operation << endl;
        exit(EXIT_FAILURE);
        break;
    }
}
int postValueExpression(const string& expression){
    stack<int> stack ;

    for(char c: expression){
        if(isdigit(c)){
            stack.push(c - '0');
        }else{
            if(stack.size()<2){
                cerr << "Error: Invalid postfix expression!" << endl;
                exit(EXIT_FAILURE);
            }
            int operand2 = stack.top() ; stack.pop();
            int operand1 = stack.top() ; stack.pop();

            int result = performOperation(operand1 , operand2 , c);
            stack.push(result);
        }
    }
    if(stack.size()!=1){
        cerr << "Error: Invalid postfix expression!" << endl;
        exit(EXIT_FAILURE);
    }
    return stack.top();
}
int main(){

    string postfix ;
    cout  << "Enter your Expression (+,-,*,/,^): " ;
    getline(cin ,  postfix) ;

    cout  << "Result: " << postValueExpression(postfix) << endl;
    return 0;
}