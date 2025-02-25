#include <iostream>
using namespace std;
void sumOfArray(int array[], int size){
    int sum = 0 ;

    
    for (int i = 0; i < size ; i++){
        sum += array[i] ;
    }
    cout << "The Sum of Array is: " << sum << endl;

    int average ;

    average = sum/size ;

    cout << "The average is: " << average << endl;
}
int main(){
    int size1 ;
    
    cout << "Enter Size: " ;
    cin >> size1 ;
    int array[size1];
    cout << "Enter "<< size1 << "Array Elements: " ;
    for (int i = 0; i < size1 ; i++){
        cin >> array[i] ;
    }
    sumOfArray(array , size1);
    return 0;
}