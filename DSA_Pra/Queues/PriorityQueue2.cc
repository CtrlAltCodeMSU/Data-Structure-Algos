#include <iostream>
#include <queue>
using namespace std;

struct Task{
    int priority;
    string description;

    bool operator < (const Task& t) const {
        return priority < t.priority;
    }
};
int main(){
    
    priority_queue<Task> pq;
    pq.push({3, "Complete homework"});
    pq.push({1, "Watch a movie"});
    pq.push({5, "Prepare for exams"});
    pq.push({2, "Go for a walk"});

  
    while (!pq.empty()) {
        cout << "Task: " << pq.top().description << " (Priority: " << pq.top().priority << ")\n";
        pq.pop();
    }
    return 0;
}