#include <iostream>
#include <stack>
#include <sstream>
#include <cmath>
using namespace std;
int operatorExpression(int op1 , int op2 , char opr){
    cout << "Applying Operator: " << op1 << " " << opr << " " << op2 << endl;
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

    cout << "Processing Expression: " << expression << endl;

    while(ss >> token){

        cout << "Token: " << token << endl;
        if(isdigit(token[0])){
            int num = stoi(token);
            stack.push(num);
            cout << "Pusehd to Stack: " << num << endl;
            // stack.push(stoi(token));
        }else{
            if(stack.size()<2){
                cerr << "Error: Invalid postfix expression!" << endl;
                exit(EXIT_FAILURE);
            }
            int opern2 = stack.top() ; stack.pop();
            int opern1 = stack.top() ; stack.pop();

            cout << "Popped from Stack: " << opern1 << " and " << opern2 << endl;

            int result = operatorExpression(opern1 ,opern2 , token[0]);
            stack.push(result);
            cout << "Pushed Result to Stack: " << result << endl;
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

    int result = postExpression(postfix);
    cout  << "Final Result: " << result<< endl;
    return 0;
    
}