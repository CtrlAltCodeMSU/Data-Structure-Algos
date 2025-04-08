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
    void deleteAtEnd(){
        if(head==NULL){
            cout << "list is Empty";
            return;
        }
        if(head->next==NULL){
            delete head;
            head=tail=NULL;
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        delete tail;
        tail = temp ;
        tail->next=NULL;
    }
    void deleteAtIndex(int pos){
        if(pos<0||head==NULL){
            cout << "Invalid index or list is Empty";
            return;
        }
        if(pos==0){
            deleteAtStart();
            return;
        }
        Node* temp = head;
        for(int i=0;i<pos-1&&temp->next!=NULL;i++){
            temp = temp->next;
        }
        if(temp->next==NULL){
            cout << "Out of Range" ;
        }
        Node* nodeToDel = temp->next ;
        temp->next=nodeToDel->next;
        if(nodeToDel==tail){
            tail= temp;
        }
        delete nodeToDel;
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
    ll.deleteAtEnd();
    ll.display();
    return 0;
}