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
        if(head == NULL){
            head = tail = newNode ;
            return;
        } else {
            newNode -> next = head ;
            head = newNode ;
        }
    }
    void push_back(int value){
        Node* newNode = new Node(value);
        if(head==NULL){
            head = tail = newNode ;
        } else {
            tail -> next = newNode ;
            tail = newNode ;
        }
    }
    void insert(int value, int position) {
        if(position<0){
            cout << "Invalid Position\n" ;
            return ;
        }
        if(position == 0) {
            push_front(value) ;
            return ;
        }
        Node* temp = head ;
        for(int i = 0 ; i<position-1;i++){
            temp = temp->next ;

        }
        Node* newNode = new Node(value);
        newNode->next=temp->next;
        temp->next=newNode;
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
    ll.push_front(70);
    ll.push_front(30);
    ll.push_front(40);

    ll.push_back(50);
    ll.push_back(60);

    ll.insert(45,4);
    ll.display_LL();    
    
    return 0;
}