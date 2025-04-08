#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;

    LinkedList() {
        head = tail = NULL;
    }

    void pushFront(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void pushBack(int value) {  
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void insertAtIndex(int value, int position) {
        if (position < 0) {
            cout << "Invalid index!" << endl;
            return;
        }
        if (position == 0) {
            pushFront(value);
            return;
        }
        Node* temp = head;
        for (int i = 0; i < position - 1 && temp != NULL; i++) {  
            temp = temp->next;
        }
        if (temp == NULL) {
            cout << "Out of Range!" << endl;
            return;
        }
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteAtStart() {
        if (head == NULL) {
            cout << "Linked list is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtEnd() {
        if (head == NULL) {
            cout << "List is Empty" << endl;
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }

    void deleteAtIndex(int pos) {
        if (pos < 0 || head == NULL) {
            cout << "Invalid index or list is Empty" << endl;
            return;
        }
        if (pos == 0) {
            deleteAtStart();
            return;
        }
        Node* temp = head;
        for (int i = 0; i < pos - 1 && temp != NULL; i++) {  
            temp = temp->next;
        }
        if (temp == NULL || temp->next == NULL) {
            cout << "Out of Range" << endl;
            return;
        }
        Node* nodeToDel = temp->next;
        temp->next = nodeToDel->next;
        if (nodeToDel == tail) {
            tail = temp;
        }
        delete nodeToDel;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList ll;
    int choice, position, value;
    do {
        cout << "\n===== Linked List Menu =====\n";
        cout << "1. Insert at Front\n";
        cout << "2. Insert at Back\n";
        cout << "3. Insert at Position\n";
        cout << "4. Delete from Front\n";
        cout << "5. Delete from End\n";
        cout << "6. Delete from Position\n";
        cout << "7. Display List\n";
        cout << "0. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Value for Insert at front: ";
                cin >> value;
                ll.pushFront(value);
                ll.display();
                break;
            case 2:
                cout << "Enter value to insert at back: ";
                cin >> value;
                ll.pushBack(value);
                ll.display();
                break;
            case 3:
                cout << "Enter value and position to insert: ";
                cin >> value >> position;
                ll.insertAtIndex(value, position);
                ll.display();
                break;
            case 4:
                ll.deleteAtStart();
                ll.display();
                break;
            case 5:
                ll.deleteAtEnd();
                ll.display();
                break;
            case 6:
                cout << "Enter position to delete: ";
                cin >> position;
                ll.deleteAtIndex(position);
                ll.display();
                break;
            case 7:
                ll.display();
                break;
            case 0:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid option. Try again!\n";
        }
    } while (choice != 0);

    return 0;
}