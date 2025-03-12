#include <iostream>
using namespace std;
class PriorityQueue{
private:
    int array[100];
    int size;
public:
    PriorityQueue(){
        size = 0;
    }
    void enqueue(int value){
        if(size>=0){
            cout << "Queue is Full!\n" ;
            return ; 
        }
        array[size] = value ;
        size++;
    }
    void dequeue(){
        if(size==0){
            cout << "Queue is Empty\n" ;
            return ;
        }
        int maxIndex = 0;
        for (int i = 1 ; i < size ; i++){
            if (array[i]>array[maxIndex]){
                maxIndex = i ;
            }
        }
        for (int i = 0; i < size-1; i++){
            array[i] = array[i+1];
        }
        size--;
    }
    int top(){
        if(size==0){
            cout << "Queue is Empty\n" ;
            return -1;
        }
        int maxValue = array[0];
        for (int i = 1; i < size ; i++)
        {
            if(array[i]>array[maxValue]){
                maxValue = array[i] ;
            }
        }
        return maxValue ;
    }
    bool empty( ){
        return size==0;
    }   
    void display(){
        if (size==0)
        {
            cout << "Queue is Empty\n" ;
            return ;
        }
        cout << "Priority Queue: " ;
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " " ;
        }
        cout << endl;
    }
};
int main(){
    
    return 0;
}