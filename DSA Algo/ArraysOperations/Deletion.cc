#include <iostream>
using namespace std;

void deletionElement(int array[] , int &size , int index){
    if (index < 0 && index > size){
        cout << "Invalid Index!" ;
    }
//     for (int i = index ; i < size - 1; i++)
//     {
//         array[i] = array[i+1];
//     }
//     size--;
// }
for(int i=index;i<size - 1 ;i++){
    array[i]=array[i+1];

    }
size--;
    cout << endl;
    cout << "Updated Array: " ;
    for (int i = 0; i < size; i++)
    {
      cout  << array[i] << " " ; 
    }
}

int main(){
    int size = 5 ;   
    int array[size] = {1,2,3,4,5};
    int index ;
    cout << "Enter the index you want to delete: " ;
    cin >> index ;
   
    deletionElement(array , size , index);
    
    return 0;
}