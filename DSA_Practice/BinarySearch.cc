#include <iostream>
using namespace std;
int binarySearch(int array[],int size ,int target){
    int left = 0 ;
    int right = size - 1 ;
    while (left<=right)
    {
        int mid = left + (right - left) / 2 ;
        if (array[mid]==target)
        {
            return mid ;
        }
        else if (array[mid]<target)
        {
            left = mid + 1 ;
        }
        else if (array[mid]>target)
        {
            right = mid - 1 ;
        }
    }
    return -1 ;
}
int main(){
    int n = 10 ;
    int array[n] = {10,11,12,13,14,15,16,17,18,19};
    int target = 18 ;
    int index = binarySearch(array,n,target);
    if (index!=-1){
        cout << "Element Found" ;
    }
    else {
        cout << "Element Not found!" ;
    }
    return 0;
}