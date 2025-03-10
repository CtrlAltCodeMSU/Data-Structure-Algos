#include <iostream>
#include <stack>
#include <sstream>
#include <cmath>
using namespace std;
int operatorExpression(int op1 , int op2 , char opr){
    switch (opr){
    case '+':
        return op1 + op2 ;
    case '-':
        return op1 - op2;
    case '*':
        return op1 * op2;
    case '^':
        return pow(op1,op2);
    case '/':
        if(op2==0){
            cerr << "Error: Invalid postfix expression!" << endl;
            exit(EXIT_FAILURE);
        }
        return op1 / op2 ;
        break;
    default:
        cerr << "Error: Invalid postfix expression!" << endl;
        exit(EXIT_FAILURE);
    break;
    }
}
int postExpression(const string& expression){
    stack<int> stack ;

    stringstream ss(expression);
    string token;

    while(ss >> token){
        if(isdigit(token[0])){
            stack.push(stoi(token));
        }else{
            if(stack.size()<2){
                cerr << "Error: Invalid postfix expression!" << endl;
                exit(EXIT_FAILURE);
            }
            int opern2 = stack.top() ; stack.pop();
            int opern1 = stack.top() ; stack.pop();

            int result = operatorExpression(opern1 ,opern2 , token[0]);
            stack.push(result);
        }
    }
    if (stack.size()!=1){
        cerr << "Error: Invalid postfix expression!" << endl;
        exit(EXIT_FAILURE);
    }
    return stack.top();
}

int main(){
    string postfix ;
    cout  << "Enter your Expression (+,-,*,/,^): " ;
    getline(cin ,  postfix) ;

    cout  << "Result: " << postExpression(postfix) << endl;
    return 0;
    
    return 0;
}