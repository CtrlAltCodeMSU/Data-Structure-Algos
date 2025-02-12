#include <iostream>
using namespace std;
int main() {
  int rollNo[5] ;
  int marks[5] ;

  for (int i = 0; i < 5 ; i++)
  {
    cout << "Enter Roll No. for " << (i+1) << " student : " ;
    cin >> rollNo[i] ; 
    cout << "Enter Marks for RollNumber " << rollNo[i] << " : " ;
    cin >> marks[i] ;
  }
  int max_student = 0 ;
  int max_marks = 0 ;
  for (int i = 0; i < 5; i++)
  {
     if (marks[i]> max_student)
     {
       max_marks = marks[i] ;
       max_student = i ;
     }
     
  }
  cout << "Max Marks: " << max_marks << endl;
  cout << "Student Roll No: " << max_student << endl;
      
}