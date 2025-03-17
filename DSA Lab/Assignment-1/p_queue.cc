#include <iostream>
#include <queue>
using namespace std;
#define MAX_SIZE 10
int main(){
    priority_queue<string> nameQueue ;
    string name ;
    cout << "Enter " << MAX_SIZE << " Names: " ;
    for(int i = 0 ; i < MAX_SIZE ; i++){
       cin >> name ;
       nameQueue.push(name);
    }
    string topPriority = nameQueue.top();
    cout << "Name with top Priority: " ;
    while(!nameQueue.empty() && nameQueue.top() == topPriority){
        cout << nameQueue.top() << endl;
        nameQueue.pop();
    }
    return 0;
}