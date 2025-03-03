#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> s ;
    s.push(10);     //this is first element added in the stack , LIFO
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);    //this is the last element (last in first out) 

    cout << s.top() << endl;

    while (!s.empty()){
       cout << s.top() << " "; 
       s.pop();
    } 
    return 0;
}