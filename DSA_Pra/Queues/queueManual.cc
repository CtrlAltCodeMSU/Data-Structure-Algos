#include <iostream>
using namespace std;
#define Max_Size 10
class Queue {
public:
    int front, rear;
    int array[Max_Size];

    Queue() {
        front = rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return rear == Max_Size - 1; 
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is Empty!\n";
            return -1;
        }
        return array[front];
    }

    int getRear() {
        if (isEmpty()) {
            cout << "Queue is Empty!\n";
            return -1;
        }
        return array[rear];
    }

    int enqueue(int value) {
        if (isFull()) {
            cout << "Queue is Full! \n";
            return -1;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear++;
        array[rear] = value;  
        return value;
    }

    int dequeue() {  
        if (isEmpty()) {
            cout << "Queue is Empty!\n";
            return -1;
        }
        int ans = array[front];
        front++;

        if(isEmpty()){
            front = rear = -1 ;
        }
        return ans;
    }

    void displayQueue() {
        if (isEmpty()) {
            cout << "Queue is Empty!\n";
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {  
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
   cout << "Front Element: " << q.getFront() << endl;
   cout << "Rear Element: " << q.getRear() << endl;
    q.displayQueue();
    
    q.enqueue(40);
    q.enqueue(50);
    cout << "Updated Array: " ;
    q.displayQueue();

    return 0;
}