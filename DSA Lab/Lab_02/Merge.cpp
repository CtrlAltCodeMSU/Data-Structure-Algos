#include <iostream>
using namespace std;
void merge(int array1[] , int size1, int array2[] , int size2 , int merge[]){
    for (int i = 0; i < size1; i++){
        merge[i] = array1[i] ;
    }

    for (int i = 0; i < size2; i++) {
        merge[i+size2] = array2[i];
    }
}
int main(){
    int array1[] = {1,2,3,4,5};
    int array2[]={14,17,18,19,100};

    int size1 = sizeof(array1)/sizeof(array1[0]);
    int size2 = sizeof(array2)/sizeof(array2[0]);

    int merged[size1+size2];

    merge(array1 , size1 , array2 , size2, merged);

    cout << "Merged Array: " << endl;

    for (int i = 0; i < (size1+size2) ; i++)
    {
        cout << merged[i] << " " ;
    }
    cout << endl;

    return 0;
}