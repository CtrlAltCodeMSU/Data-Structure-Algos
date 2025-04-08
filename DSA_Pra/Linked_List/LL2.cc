#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int value){
            data = value;
            next = NULL;
    }
};
class LinkedList{
    public:
        Node* head;
        Node* tail;

    LinkedList(){
        head = tail = NULL ;
    }
    void pushFront(int value){
        Node* newNode = new Node(value);
        if(head==NULL){
            head = tail = newNode ;
        } else {
            newNode->next=head;
            head = newNode ;
        }
    }
    void pushback(int value){
        Node* newNode = new Node(value);
        if(head==NULL){
            head = tail = newNode ;
        } else {
            tail->next = newNode ;
            tail = newNode;
        }
    }
    void insertAtIndex(int value, int position){
        if(position<0){
            cout << "Invalid index!" ;
            return;
        } 
        if(position==0){
            pushFront(value);
            return;
        }
        Node* temp = head;
        for(int i = 0;i<position-1;i++){
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        newNode->next =temp->next;
        temp->next=newNode;
    }
    void deleteAtStart(){
        if(head==NULL){
            cout << "Linked list is empty" ;
        }
        Node* temp= head;
        head = head->next;
        delete temp;

    }
    
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout << temp->data << "->" ;
            temp = temp->next;
        }
        cout <<"NULL"<< endl;
    }
};
int main(){
    LinkedList ll;
    ll.pushFront(20);
    ll.pushFront(10);
    ll.pushFront(70);
    ll.pushFront(30);
    ll.pushFront(40);

    ll.pushback(50);
    ll.pushback(60);

    ll.insertAtIndex(45,4);
    ll.display();

    ll.deleteAtStart();
    ll.display();
    return 0;
}