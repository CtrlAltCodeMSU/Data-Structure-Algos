#include <iostream>
using namespace std;
class Node{
public:
    int data ;
    Node* next;

    Node(int value){
        data = value ;
        next = NULL ;
    }
};
class Linked_List{
    Node* head;
    Node* tail;

public:
    Linked_List(){
        head = tail = NULL ;
    }
    void push_front(int value){
        Node* newNode = new Node(value); // dynamic object 
        if(head== NULL){
            head = tail = newNode ;
            return;
        } else {
            newNode -> next = head ;
            head = newNode ;
        }
    }
    void display_LL(){
        Node* temp = head ;
        while(temp!=NULL){
            cout << temp -> data << "->" ;
            temp = temp -> next ;
        }
        cout <<"NULL"<< endl;
    }
};
int main(){
    Linked_List ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.push_front(40);


    ll.display_LL();
    
    
    return 0;
}