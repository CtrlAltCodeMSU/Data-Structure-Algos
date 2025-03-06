#include <iostream>
using namespace std;
void bubbleSort(int array[], int size){
    for (int i = i ; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp ;
            }
        }   
    }
}
double calculateMedian(int array[], int size){
    bubbleSort(array, size);

    if (size%2==0)
    {
        return (array[size/2-1]+array[size/2])/2.0 ;
    }else
    {
        return array[size/2];
    }
}
int main(){
    int arr[] = {7, 3, 1, 4, 5, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Median: " << calculateMedian(arr, n) << endl;
    return 0;
}