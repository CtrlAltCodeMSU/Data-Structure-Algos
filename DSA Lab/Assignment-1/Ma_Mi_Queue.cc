#include <iostream>
#include <queue>
using namespace std;
#define MAX_SIZE 10
int main(){
    queue<int> values; 
    int num , minValue , maxValue ;
    cout << "Enter " << MAX_SIZE << " Stack Values: " ;
    for (int i = 0; i < MAX_SIZE; i++){
        cin >> num ;
        values.push(num);
    }
    minValue = maxValue = values.front();
    while (!values.empty()){
        int element = values.front();
        values.pop();
        if(element>maxValue){
            maxValue = element ;
        }
        if(element<minValue){
            minValue = element ;
        }
    }
    cout << "Max_Value is: " << maxValue << endl;
    cout << "Min_Value is: " << minValue << endl;

    return 0;
}