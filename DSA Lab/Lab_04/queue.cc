#include <iostream>
#include <queue>
using namespace std;

int main(){
    int size = 5 ;
    queue <int> q1 ;
    int element ;
    cout << "Enter queue Elements: " ;
    for(int i = 0 ; i<size ; i++){
        cin >> element ;
        q1.push(element);
    }      
    q1.pop();
    while(!q1.empty()){
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;
    return 0;
}