#include <iostream>
using namespace std;
#define MAX 10
class stack{
private:
    int array[MAX];
    int top;
public:
    stack(){
        top = MAX - 1 ;
    }
    void push(int value){
        if (top>=MAX-1)
        {
            cout << "Stack Overflow cannot push " << value ;
            return ; 
        }
        array[++top] = value ;
        cout << value << " pushed into stack!" ;
    }
    void pop()){
        if (top < 0)
        {
            cout << "Stack Underflow cannot Pop!" ;
            return ;
        }
        cout << array[top--] << " Poped from Stack!" ;
    }




};
int main(){
    
    return 0;
}