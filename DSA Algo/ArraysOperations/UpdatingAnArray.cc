#include <iostream>
using namespace std;

int main(){
    int size = 7 ;
    int array[size] = {7,8,9,4,5,6,1};
    int index ;
    int newValue ;
    cout << "Enter Index to update from 0 to " << (size - 1) << ": " ;
    cin >> index ;

   
        if (index >= 0 && index < size){
            cout << "Enter Value: " ;
            cin >> newValue;
            array[index] = newValue ;

            cout << "Updated Array: " ;
            for (int i = 0; i < size; i++)
            {
                cout << array[i] << " " ;
            }
        }
        else
        {
            cout << "Invalid index!";
        }
    
    return 0;
}