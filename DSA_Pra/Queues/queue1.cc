#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue <int> queue1 ;
    queue1.push(20);
    queue1.push(10);
    queue1.push(30);
    queue1.push(40);
    queue1.push(50);
    cout << queue1.front() << endl;
    while(!queue1.empty()){
        cout << queue1.front() << " " ;
        queue1.pop();
    }
    return 0;
}