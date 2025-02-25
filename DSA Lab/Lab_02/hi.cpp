#include <iostream>
using namespace std;

int main(){
    int size1  ;
    
    cout << "Enter Size: " ;
    cin >> size1 ;
    int array[size1];
    cout << "Enter "<< size1 << " Array Elements: " ;
    for (int i = 0; i < size1 ; i++){
        cin >> array[i] ;
    }

    // sumOfArray(array , size1);
    return 0;
}