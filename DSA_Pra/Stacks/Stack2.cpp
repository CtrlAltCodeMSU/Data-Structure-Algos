#include <iostream>
using namespace std;
#define MAX 10
class Stack{
private:
    int array[MAX];
    int top;
public:
    Stack(){
        top = -1 ;
    }
    void push(int value){
        if (top>=MAX-1)
        {
            cout << "Stack Overflown Cannot push " << value ;
        }
        else{
        array[++top] = value ;
        cout << value << " pushed into Stack" << endl;
        }
    }
    void pop(int value){
        if (top<0)
        {
            cout << "Stack underflown cannot pop " << value ;
        } else {
       cout << array[top--] << " poped from Stack"  ;
        }
    }
    int peek(){
        if (top<0)
        {
            cout << "Stack is Empty!" ;
            return -1;
        }
        return array[top] ;   
    }
    bool isEmpty(){
        return top < 0 ;
    }
    bool isFull(){
        return top>= MAX-1 ;
    }
    void display(){
        if (top<0)
        {
            cout<<"Stack is Empty" ;
            return ;
        }
        cout << "Stack Elements: " ;
        for (int i = top ; i >= 0 ; i--)
        {
            cout << array[i] << " " ;
        }
        cout << endl;
    }
};
int main(){
    Stack s ;
    s.push(10);
    s.push(10);
    s.push(10);
 
    s.display();

    cout << "Top Element: " << s.peek() << endl;
    
    return 0;
}