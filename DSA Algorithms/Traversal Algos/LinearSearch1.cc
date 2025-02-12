#include <iostream>
using namespace std;

int main() {
  int array[5] = {1, 2, 3, 4, 5};
  int target;
  bool found = false ;
  int i = 0 ;

  do{
    cout << "Enter Element for Search: " ;
    cin >> target ;
    for (int i = 0; i < 5; i++)
    {
      if (array[i] == target)
      {
        cout << "Target found at index " << i << endl;
        found = true;
        break;
      }
    }
    if (!found)
    {
      cout << "Target not found" << endl;
    }
  }while(!found);
 
  return 0;
}
