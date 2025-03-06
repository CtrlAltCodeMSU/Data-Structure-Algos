#include <iostream>
using namespace std;
int calculateMode(int array[], int size){
    int maxCount = 0 ;
    int mode = array[0] ;

    for (int i = 0; i < size; i++)
    {
        int count = 0 ;
        for (int  j = 0; j < size; j++)
        {
            if (array[j]==array[i])
            {
                count++;
            }
        }
        if(count>maxCount){
            maxCount = count ;
            mode = array[i] ;
        }
    }
    cout << mode << " exists " << maxCount << " times\n"  ;
    return mode; 
}
int main(){
    int arr[] = {1, 3, 3, 7, 2, 3, 5, 5, 5, 7, 7, 7, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Mode: " << calculateMode(arr, n) << endl;
    return 0;
    
    return 0;
}