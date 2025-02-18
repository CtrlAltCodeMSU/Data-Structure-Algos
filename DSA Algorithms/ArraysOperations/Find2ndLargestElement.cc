#include <iostream>
#include <vector>
using namespace std;
int secondLargest(vector<int> &array){
    int n = array.size();

    int largest = -1 , secondLarge = -1;

    for (int i = 0; i < n; i++)
    {
        if (array[i]>largest)
        {
            secondLarge = largest ;
            largest = array[i];
        }
        else if(array[i] < largest && array[i] > secondLarge) {
            secondLarge = array[i];
        }  
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if (array[i] > secondLarge && array[i] != largest)
    //     {
    //         secondLarge = array[i] ;
    //     }
    // }
    return secondLarge;
    
}
int main(){
    vector<int> arr =  {12, 35, 1, 10, 34, 1};
    
    cout << "\n " <<secondLargest(arr);
    cout << endl;
    return 0;
}