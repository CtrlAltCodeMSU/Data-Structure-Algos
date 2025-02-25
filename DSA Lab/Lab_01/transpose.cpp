#include <iostream>
using namespace std;

int main(){
    int students = 3 ;
    int subjects = 4;
    
    int marks[students][subjects] = {
            {12, 32, 45, 56},
            {34, 45, 66, 90},
            {34, 45, 67, 90}
        };
    cout << "Printing Original Matrix: " << endl;
    for (int i = 0; i < students; i++){
        for (int j = 0; j < subjects; j++){
            cout << marks[i][j] << " " ;
        }
        cout << endl;   
    }
    cout << endl;
    cout << "Printing Tranpose of The matrix: " << endl;

    for (int j = 0; j < subjects; j++){
        for (int i = 0; i < students; i++){
            cout << marks[i][j] << " " ;
        }
        cout << endl;   
    }

    return 0;
}