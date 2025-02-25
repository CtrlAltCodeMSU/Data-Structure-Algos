// #include <iostream>
// using namespace std;
// void bubbleSort(string names[],int size, int scores[]){
//     for (int i = 0; i < size-1; i++)
//     {
//         for (int j = 0; j < size - i - 1; j++)
//         {
//             if (scores[j]>scores[j+1])
//             {
//                 int temp = scores[j] ;
//                 scores[j] = scores[j+1];
//                 scores[j+1] = temp ;
//             }  
//         }
//     }    
// }
// void displayArray(string names[],int size, int scores[]){
//     cout << "Displaying Array: " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << names[i] << ": " << scores[i] << endl;
//     }
//     cout << endl;
// }
// int main(){
//     int size = 6 ;
//     string names[size] = {"Alice", "Bob", "Charlie", "David", "Eve", "Frank"};
//     int scores[size] = {85, 92, 78, 92, 80, 85};

//     cout << "Unsorted Data: " << endl;
//     displayArray(names , size , scores);
//     bubbleSort(names , size , scores);
//     cout << "Sorted Data: " << endl;
//     displayArray(names , size , scores);
    

//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;
void bubbleSort(string names[], int scores[], int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (scores[j] < scores[j + 1]) {
                int tempScore = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = tempScore;
    
                string tempName = names[j];
                names[j] = names[j + 1];
                names[j + 1] = tempName;
            }
            else if (scores[j] == scores[j + 1] && names[j] > names[j + 1]) {
                int tempScore = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = tempScore;
                
                string tempName = names[j];
                names[j] = names[j + 1];
                names[j + 1] = tempName;
            }
        }
    }
}
void display(string names[], int scores[] , int n){
    for (int i = 0; i < n; i++) {
        cout << names[i] << ": " << scores[i] << endl ;
    }
    cout << endl;
}
int main() {
    int n = 6;
    string names[n]  = {"Alice", "Bob", "Charlie", "David", "Eve", "Frank"};
    int scores[n]    = {85, 92, 78, 92, 80, 85};
    cout << "Unsorted Data: " << endl;
    display(names , scores , n);
    bubbleSort(names , scores , n);
    cout << "Sorted Data: " << endl;
    display(names , scores , n);
    return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// // Structure to hold student data
// struct Student {
//     string name;
//     int score;
// };

// void bubbleSort(Student arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             // Compare scores first (descending order)
//             if (arr[j].score < arr[j + 1].score) {
//                 // Swap if current score is less than next score
//                 Student temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//             // If scores are equal, compare names alphabetically
//             else if (arr[j].score == arr[j + 1].score && 
//                      arr[j].name > arr[j + 1].name) {
//                 // Swap if current name comes after next name alphabetically
//                 Student temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     // Example input
//     string names[] = {"Alice", "Bob", "Charlie", "David", "Eve", "Frank"};
//     int scores[] = {85, 92, 78, 92, 80, 85};
//     int n = 6; // Number of students

//     // Create array of Student structures
//     Student students[n];
//     for (int i = 0; i < n; i++) {
//         students[i].name = names[i];
//         students[i].score = scores[i];
//     }

//     // Sort the students array
//     bubbleSort(students, n);

//     // Print the ranked list
//     for (int i = 0; i < n; i++) {
//         cout << students[i].name << ": " << students[i].score << endl;
//     }

//     return 0;
// }