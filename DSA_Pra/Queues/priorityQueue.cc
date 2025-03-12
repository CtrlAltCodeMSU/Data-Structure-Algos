#include <bits/stdc++.h>
using namespace std;
class PriorityQueue{

    public:
    static const int MAX_SIZE = 1000 ;
    int values[MAX_SIZE];
    int priorities[MAX_SIZE];
    int pq_size;
    PriorityQueue(){
        pq_size = -1 ;
    }
    void enqueue(int value , int priority){
        if(pq_size == MAX_SIZE-1){
            cout << "Priority Queueu is Full!\n"  ;
            return;
        }
        pq_size++;
        values[pq_size] = value ;
        priorities[pq_size] = priority;
    }
    bool isEmpty(){
        return pq_size == -1 ;
    }
    int peek(){
        if(isEmpty()){
            cout << "Priority Queue is Empty\n" ;
            return -1;
        }
        int highestPriority = INT_MIN ;
        int index = -1;

        for(int i = 0 ; i <= pq_size ; i++){
            if(highestPriority==priorities[i]&&index>-1&&values[index]<values[i]){
                highestPriority = priorities[i] ;
                index = i ;
            } 
            else if (highestPriority<priorities[i]){
                highestPriority = priorities[i] ;
                index = i ;
            }
        }
        return index ;
    }
    void dequeue(){
        if(isEmpty()){
            cout << "Priority Queue is Empty\n" ;
            return ;
        }
        int index = peek() ;
        for(int i = index;i < pq_size ; i++){
            values[i] = values[i+1];
            priorities[i] = priorities[i+1];
        }
        pq_size--;
    }
    void printQueue() {
        if (isEmpty()) {
            cout << "Priority Queue is empty!" << endl;
            return;
        }
        cout << "Current Priority Queue:\n";
        for (int i = 0; i <= pq_size; i++) {
            cout << "[Value: " << values[i] << ", Priority: " << priorities[i] << "] " << endl;
        }
        cout << endl;
    }
};
int main(){
    PriorityQueue pq;
    pq.enqueue(10,2);
    pq.enqueue(14,4);
    pq.enqueue(16,4);
    pq.enqueue(12,3);
    pq.enqueue(18,4);

    pq.printQueue();
    int index = pq.peek();
    if(index!=-1){
        cout << "Top Element is: " << pq.peek() << " -> value: " << pq.values[index] << endl ;
    }
    pq.dequeue();
    index =pq.peek();
    if(index!=-1){
        cout << "Top Element is: " << pq.peek() << " -> value: " << pq.values[index] << endl;
    }
    pq.dequeue();
    index =pq.peek();
    if(index!=-1){
        cout << "Top Element is: " << pq.peek() << " -> value: " << pq.values[index] << endl;
    }
    pq.printQueue();


}