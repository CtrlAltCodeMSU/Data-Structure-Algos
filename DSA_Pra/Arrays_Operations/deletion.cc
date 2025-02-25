#include <iostream>
using namespace std;

void deleteElement(int arr[], int &n, int index) {
    if (index < 0 || index >= n) {
        cout << "Invalid Index!\n";
    }
    for (int i = index; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main(){
    int size = 7 ;
    int array[size] = {1,2,3,4,5,6,7};
    cout << "Original Array: " ;
    displayArray(array , size);
    deleteElement(array, size , 3);

    cout << "Updated Array after deletion: " ;
    displayArray(array, size);

    return 0;
}