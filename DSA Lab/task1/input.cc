#include <iostream>
using namespace std;
void largeandsmall(int array[] , int size){
    int small = array[0] ;
    int large = array[0] ;

    for (int i = 0; i < size; i++)
    {
        if (array[i]>large)
        {
            large = array[i] ;
        }else{
            small = array[i] ;
        }
    }
    cout  << "Small sized Element: " << small << endl;
    cout  << "large sized Element: " << large << endl;
    
}
void SortingAlgo(int array[], int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (array[j]<array[j+1])
            {
                int temp = array[j] ;
                array[j] = array[j+1] ;
                array[j+1] = temp ;
            }
        }
    }
}
void displayArray(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " " ;
    }   
}
void sumandAverage(int array[], int size){
    int sum = 0 ;
    double average = 0 ;

    for (int i = 0; i < size; i++)
    {
        sum += array[i] ;
    }
    average =(double)sum/size ;

    cout << "Sum of Array is: " << sum << endl;
    cout << "Average of Array is: " << average ;
    
}
void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
int main(){
    int size = 5 ;
    int array[size] ;

    cout << "Enter " << size <<" Array elements: " ;
    
    for(int i = 0 ; i < size ; i++){
        cin >> array[i] ;
    }

    cout  << "Final Array: " ;

    displayArray(array, size);
    cout << endl;
    reverseArray(array, size);

    cout << endl;

    sumandAverage(array, size);
    cout << endl;

    largeandsmall(array , size);

    SortingAlgo(array, size);

    cout << "Sorted Array: " ;

    displayArray(array, size) ;    
    return 0;
}