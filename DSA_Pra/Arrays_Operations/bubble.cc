#include <iostream>
using namespace std;
void bubbleSort(int array[] , int size ){
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1 ; j++)
        {
            if (array[j]>array[j+1])
            {
                int temp =  array[j] ;
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
void displayArray(int array[] , int size){
    for (int i = 0; i < size ; i++)
    {
        cout << array[i] << " " ; 
    }
    cout << endl;
}
int main(){
    int size = 7 ;
    int array[size] = {7,2,1,10,56,3,90};
    cout << "Unsorted Original Array: " ;
    displayArray(array , size);
    
    bubbleSort(array, size);
    cout << "Updated Sorted Array: " ;
    displayArray(array , size);

    return 0;
}