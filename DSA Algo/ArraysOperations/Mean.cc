#include <iostream>
using namespace std;
double calculateMean(int array[], int n){
    double sum = 0 ;
    for (int i = 0; i < n; i++)
    {
        sum+=i ;
    }
    double average = sum/n ;
    return average ;
    
}
int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(array)/sizeof(array[0]);
    cout << "Mean: " << calculateMean(array,n) << endl;
    return 0;
}