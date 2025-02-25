#include <iostream>
using namespace std;
int main(){
    int array[5] = {5,4,1,2,3};
    int array2[5];
    
    for (int i = 0; i < 5; i++)
    {
        array2[i] = array[i];
    }
    cout << "Copied Array: " ;
    for (int i = 0; i < 5; i++)
    {
        cout << array2[i] << " " ;
    }
    return 0;
}