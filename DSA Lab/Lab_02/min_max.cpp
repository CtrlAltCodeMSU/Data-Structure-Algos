#include <iostream>
using namespace std;
void max_min(int array[], int size){
    int max = array[0] ;
    int min = array[0] ;

    for (int i = 0; i < size; i++){
        if (array[i]>max){
            max = array[i] ;
        }
       else if(array[i]<min){
           min = array[i] ;
       }
    }
    cout << "Max Element: " << max << endl;
    cout << "Min Element: " << min << endl;   
}
int main(){
    int size = 5 ;
    int array[size] = {10,12,85,7,5};

    max_min(array , size);
    
    return 0;
}