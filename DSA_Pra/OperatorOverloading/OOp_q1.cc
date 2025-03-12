#include <iostream>
#include <queue>
using namespace std;

class Patient {
public:
    string name;
    int severity;

    Patient(string n, int s) : name(n), severity(s) {}

    
    bool operator<(const Patient& p) const {
        return severity < p.severity;  
    }
};

int main() {
    priority_queue<Patient> pq; 
    
    pq.push({"Alice", 3});
    pq.push({"Bob", 5});
    pq.push({"Charlie", 2});

    while (!pq.empty()) {
        Patient p = pq.top();
        pq.pop();
        cout << "Treating patient: " << p.name << " (Severity: " << p.severity << ")\n";
    }
}