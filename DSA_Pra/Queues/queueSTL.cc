#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue <int> q ;

    q.push(10);
    q.push(20);
    q.push(30);
    cout << "size of the queue is: " << q.size(); 
    cout << endl;

    cout << "Front Element: " << q.front() << endl;
    cout << "Rear Element: " << q.back() << endl;

    cout << "Queue Elements: " ;
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}