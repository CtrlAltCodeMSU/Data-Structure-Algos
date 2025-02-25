// #include <iostream>
// using namespace std;

// int main(){
//     int size = 10 ;
//     int array[size];

//     cout << "Enter Array Elements: " ;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> array[i] ;
//     }

//     cout << "Reverse Array: " ;
//     for (int i = size - 1 ; i >= 0; i--)
//     {
//         cout << array[i] << " " ;
//     }
    
    
//     return 0;
// }
#include <iostream>
using namespace std;
void reverseArray(int array[] , int size){
    for (int i = 0; i < size/2; i++)
    {
        int temp = array[i] ;
        array[i] = array[size-1-i];
        array[size-1-i] = temp ;
    }
    
}
int main(){
    int array[] = {1,2,3,4,5};
    int size = 5 ;

    reverseArray(array, size);

    cout << "Reversed Array: " ;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    
    return 0;
}