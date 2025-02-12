#include <iostream>
using namespace std;
int main() {
  int size ;
  cout << "Enter Size of Array: " ;
  cin >> size ;
  int array[size] ;
  
  cout << "Enter " << size << " Elements: " ;
 for (int i = 0; i < size; i++){
  cin >> array[i] ;
 } 
 
 cout << "Original Array: " ;
 for (int i = 0; i < size; i++){
   cout << array[i] << " ";
 }

 cout << endl;
 cout << "Reverse Array: "  ;
 for (int i = size - 1; i >= 0 ; i--){
   cout << array[i] << " " ;
 }
}