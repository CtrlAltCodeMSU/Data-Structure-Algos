#include <iostream>
using namespace std;
int linearSerach(int array[], int n ,  int value){
    for (int i = 0; i < n; i++)
    {
        if (array[i]==value)
        {
            return i ;
        }
        
    }
    return -1 ;
}
int main(){
    int size = 10 ;
    int array[size] = {1,2,3,4,5,6,7,8,9,10};
    int key = 10 ;

    int index = linearSerach(array , size , key);

    if (index!=-1)
    {
        cout << "Element " << key << " found at " << index << " index" << endl;
    }else{
        cout << "Not found" << endl;
    }
    
    return 0;
}