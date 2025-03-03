#include <iostream>
using namespace std;

int main(){
    
        int x[10]={35,33,42,10,14,19,27,44,26,31};
        int j;
        for(j = 0; j < 6; j++){
            x[j] = 2 * j;
            cout << x[j] << " " ;
        }
    return 0;
}   