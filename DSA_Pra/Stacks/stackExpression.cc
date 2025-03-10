#include <iostream>
#include <cmath>
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
        break;
    }
}
int main(){
    
    return 0;
}