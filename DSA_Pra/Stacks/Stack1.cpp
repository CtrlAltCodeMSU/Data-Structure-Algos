#include <iostream>
using namespace std;
#define MAX 10
class stack{
private:
    int array[MAX];
    int top;
public:
    stack(){
        top = -1 ;
    }
    void push(int value){
        if (top>=MAX-1){
            cout << "Stack Overflow cannot push " << value ;
            return ; 
        }
        array[++top] = value ;
        cout << value << " pushed into stack. " << endl ;
    }
    void pop(){
        if (top < 0)
        {
            cout << "Stack Underflow cannot Pop!" ;
            return ;
        }
        cout << array[top--] << " Poped from Stack!" << endl ;
    }
    int peek(){
        if (top<0){
            cout << "Stack is Empty!" ;
            return -1;
        }
        return array[top] ;   
    }
    bool isEmpty(){
        return top < 0 ;
    }
    bool isFull() {
        return top >= MAX - 1;
    }
    void display(){
        if(top<0){
            cout<< "Stack is empty!" ;
            return ;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    
    s.display();

    cout << "Top Element: " << s.peek() << endl;

    s.pop() ;
    s.display();
    
    return 0;
}