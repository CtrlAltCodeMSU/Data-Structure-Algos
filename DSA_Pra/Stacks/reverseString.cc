#include <iostream>
#include <stack>
using namespace std;
string reverseString(string str){
    stack<char> s ;

    for(char c : str){
        s.push(c);
    }
    string reversed ;
    while(!s.empty()){
        reversed += s.top();
        s.pop();
    }
    return reversed;
}
int main(){

    string reverse ;
    cout << "Enter String: " ;
    getline(cin, reverse);

    string update = reverseString(reverse);

    cout << "Reversed String is: " << update << endl;

    
    return 0;
}
