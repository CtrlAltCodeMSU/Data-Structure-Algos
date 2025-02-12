#include <iostream>
using namespace std;

int main(){
    int size = 5 ;   
    int array[size+1] = {1,2,3,4,5};
    int index ;
    cout << "Enter the index you want to shift: " ;
    cin >> index ;
   int value ;
    if (index >= 0 && index < size)
    {
        cout << "Enter Value: " ;
        cin >> value ;

        for (int i = size ; i > index ; i--)
        {
            array[i] = array[i-1];
            
        }
        array[index] = value ;
        size++;
        cout << "Updated Array: ";
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
    } else {
        cout << "Invalid index!";
    }
    
    return 0;
}