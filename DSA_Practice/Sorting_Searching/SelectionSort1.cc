#include <iostream>
using namespace std;
void selectionSort(int array[] , int size){
    for (int i = 0; i < size; i++)
    {
        int minIndex = i ;

        for (int j = i+1; j < size; j++)
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j ;
            }
        }
        if (minIndex!=i)
        {
            int temp = array[i] ;
            array[i] = array[minIndex] ;
            array[minIndex] = temp ;
        }
    }
}
void sortedArray(int array[] , int size){
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " " ;
    }
    cout << endl;
}
int main(){
    int size = 5 ;
    int array[size]= {10,12,7,3,45};

    cout << "Original Array: " ;
    sortedArray(array, size);

    selectionSort(array, size);
    cout << "Sorted Array: " ;
    sortedArray(array, size);

    
    return 0;
}