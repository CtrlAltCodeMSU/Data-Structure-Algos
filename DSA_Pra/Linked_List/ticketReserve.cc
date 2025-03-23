#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string name;
    Node* next;

    Node(string passengerName) {
        name = passengerName;
        next = nullptr;
    }
};

class AirlineReservation {
    Node* head;

public:
    AirlineReservation() {
        head = nullptr;
    }

    // Insert passenger in sorted order
    void reserveTicket(string passengerName) {
        Node* newNode = new Node(passengerName);

        if (head == nullptr || head->name >= passengerName) {
            newNode->next = head;
            head = newNode;
            cout << "✅ Ticket reserved for " << passengerName << ".\n";
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr && temp->next->name < passengerName) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;

        cout << "✅ Ticket reserved for " << passengerName << ".\n";
    }

    // Cancel a reservation
    void cancelReservation(string passengerName) {
        if (head == nullptr) {
            cout << "❌ No reservations found.\n";
            return;
        }

        if (head->name == passengerName) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "✅ Reservation for " << passengerName << " canceled.\n";
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr && temp->next->name != passengerName) {
            temp = temp->next;
        }

        if (temp->next == nullptr) {
            cout << "❌ Passenger " << passengerName << " not found.\n";
            return;
        }

        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
        cout << "✅ Reservation for " << passengerName << " canceled.\n";
    }

    // Check if a ticket is reserved
    void checkReservation(string passengerName) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->name == passengerName) {
                cout << "✅ " << passengerName << " has a reserved ticket.\n";
                return;
            }
            temp = temp->next;
        }
        cout << "❌ No reservation found for " << passengerName << ".\n";
    }

    // Display all passengers
    void displayPassengers() {
        if (head == nullptr) {
            cout << "🚫 No reservations.\n";
            return;
        }

        cout << "📜 Passenger List:\n";
        Node* temp = head;
        while (temp != nullptr) {
            cout << "✈ " << temp->name << "\n";
            temp = temp->next;
        }
    }

    ~AirlineReservation() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    AirlineReservation flight;
    int choice;
    string name;

    do {
        cout << "\n🛫 Airline Ticket Reservation Menu\n";
        cout << "1. Reserve a Ticket\n";
        cout << "2. Cancel a Reservation\n";
        cout << "3. Check Reservation\n";
        cout << "4. Display Passengers\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter passenger name: ";
                getline(cin, name);
                flight.reserveTicket(name);
                break;
            case 2:
                cout << "Enter passenger name: ";
                getline(cin, name);
                flight.cancelReservation(name);
                break;
            case 3:
                cout << "Enter passenger name: ";
                getline(cin, name);
                flight.checkReservation(name);
                break;
            case 4:
                flight.displayPassengers();
                break;
            case 5:
                cout << "👋 Exiting the program. Safe travels!\n";
                break;
            default:
                cout << "❌ Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}