#include <iostream>
#include <queue>
using namespace std;
struct PrintJob{
    int urgency;
    string documentName;
};
struct Compare{
    bool operator()(PrintJob const& a, PrintJob const& b){
        return a.urgency < b.urgency;
    }
};
int main(){
    priority_queue<PrintJob, vector<PrintJob>, Compare> pq;
    
    pq.push({1, "Normal Report"});  
    pq.push({3, "Urgent Invoice"}); 
    pq.push({2, "Presentation Slides"});    

    while (!pq.empty()) {
        cout << "Printing: " << pq.top().documentName << "\n";
        pq.pop();
    }
    return 0;
}