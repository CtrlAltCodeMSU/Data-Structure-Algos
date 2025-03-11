#include <iostream>
#include <stack>
using namespace std;
int factorial(int n){
//    return (n<=1)?1:n*factorial(n-1);
   if(n==1 || n==0){
     return 1 ;
   }
   return n*factorial(n-1);
}
int main(){

    stack<int> stack ;
    int value ;
    cout << "Enter the 5 Elements: " ;

    for (int i = 0; i < 5; i++){
        cin >> value ;
        stack.push(value) ;
    }
    
    cout << "factorial of Each number of stack is: \n" ;

    while (!stack.empty()){
     int num = stack.top();
     stack.pop();
     cout << "Faxtorial of " << num  << " is " << factorial(num) << endl;
    }  
    return 0;
}