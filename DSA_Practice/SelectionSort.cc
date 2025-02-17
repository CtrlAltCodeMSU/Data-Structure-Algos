#include <iostream>
using namespace std;
void selectionSort(int array[], int size){
    for (int i = 0; i < size - 1; i++){
        int minIndex = i ;

        for (int j = i+1 ; j < size; j++){
            if (array[j]<array[minIndex]){
                minIndex = j ;
            }
        }
        if (minIndex!=i){
            int temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp ;
        }
    }
}
void printArray(int array[],int size){
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " " ;
    }
    cout << endl;
}

int main(){
    int size ;
    cout << "Enter the size for Array: " ;
    cin >> size ;
    
    int array[size];

    cout << "Enter " << size << " Elements: " ;
    for (int i = 0; i < size ; i++){
        cin >> array[i] ;
    }

    cout << "Unsorted Array: " ;
    printArray(array , size) ;

    selectionSort(array, size);
    cout << "Selection Sorted Array: " ;

    printArray(array, size);

    return 0;
}