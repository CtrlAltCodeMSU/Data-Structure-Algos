#include <iostream>
using namespace std;
void bubbleSort(int array[], int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0 ; j < size - i - 1 ; j++){
            if (array[j]>array[j+1]){
                int temp = array[j] ;
                array[j] = array[j+1];
                array[j+1] = temp ;
            }
        }
    }
}
void printArray(int array[] , int size){
    for (int i = 0; i < size ; i++){
        cout << array[i] << " " ;
    }
    cout << endl ;
}
// "code-runner.executorMap": {

  //     "cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt && ./$fileNameWithoutExt"
  // },
int main(){
    int size ;
    cout << "Enter the size for Array: " ;
    cin >> size ;
    
    int array[size];

    cout << "Enter " << size << " Elements: " ;
    for (int i = 0; i < size ; i++){
        cin >> array[i] ;
    }
    

    cout << "Original Array: " ;
    printArray(array,size);

    bubbleSort(array , size);

    cout << "Sorted Array: " ;
    printArray(array,size);
    return 0;
}