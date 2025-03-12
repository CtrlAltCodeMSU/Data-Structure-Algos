#include <iostream>
using namespace std;
#define Max_Size 10
class CircularQueue{
 private:
    int front, rear;
    int array[Max_Size];
public:
    CircularQueue(){
        front = rear = -1 ;
    }
    bool isEmpty(){
        return front==-1 ;
    }
    bool isFull(){
        return ((rear+1)%Max_Size == front );
    }
    void enqueue(int value){
        if(isFull()){
            cout << "Queue is Full!\n" ;
            return ;
        }
        if(isEmpty()){
            front = rear = 0 ;
        } else {
            rear = (rear + 1)%Max_Size;
        }
        array[rear]= value ;
        cout << value << " enqueued Successfully!\n" ; 
    }
    int dequeue(){
        if(isEmpty()){
            cout << "Queue is Empty!\n" ;
            return -1 ;
        }
        int removedValue = array[front];
        if(front==rear){
            front = rear = -1 ;
        } else {
            front = (front+1)%Max_Size ;
        }
        cout << removedValue << " dequeued Succcessfully!\n"; 
        return removedValue ;
    }
    int getFront(){
        if(isEmpty()){
            cout << "Queue is Empty!\n" ;
            return -1;
        }
        return array[front];
    }
    int getRear(){
        if(isEmpty()){
            cout << "Queue is Empty!\n" ;
            return -1;
        }
        return array[rear];
    }
    void displayQueue(){
        if(isEmpty()){
            cout << "Queue is Empty!\n" ;
            return ;
        }
        cout << "Queue: " ;
        for(int i = front ; i!=rear ; i = (i+1)%Max_Size){
            cout << array[i] << " " ;
        }
        cout << "\n" ;
    }
};
int main(){

    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.displayQueue();
    q.dequeue();
    q.enqueue(60);
    q.displayQueue();
    
    return 0;
}