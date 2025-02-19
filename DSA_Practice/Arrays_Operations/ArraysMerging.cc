#include <iostream>
using namespace std;
void mergeArrays(int array1[] ,int size1 , int array2[] , int size2 , int merge[]){
    for (int i = 0; i < size1; i++){
        merge[i] = array1[i] ;
    }
    for (int i = 0; i < size2; i++){
        merge[i+size1] = array2[i] ;
    }
}
int main(){
    int array1[] = {1,2,3};
    int array2[]={4,5,6};
    int size1 = sizeof(array1)/sizeof(array1[0]);
    int size2 = sizeof(array2)/sizeof(array2[0]);

    int merge[size1+size2] ;

    mergeArrays(array1, size1 , array2 , size2 ,merge);

    cout<< "Merged Array: " ;
    for (int i = 0; i < size1+size2 ; i++){
        cout << merge[i] << " " ;
    }
    return 0;
}