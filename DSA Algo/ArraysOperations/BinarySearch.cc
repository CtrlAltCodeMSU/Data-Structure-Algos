#include <iostream>
using namespace std;
int binarySearch(int array[], int size, int target)
{
  int left = 0;
  int right = size - 1;
  while (left <= right)
  {
    int mid = left + (right - left) / 2;
    if (array[mid] == target)
    {
      return mid;
    }
    else if (array[mid] < target)
    {
      left = mid + 1;
    }
    else
    {
      right = mid - 1;
    }
  }
  return -1;
}
int main()
{
  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int target = 10;
  int index = binarySearch(array, 10, target);
  if (index == -1)
  {
    cout << "Target not found" << endl;
  }
  else
  {
    cout << "Target found at index " << index << endl;
  }
}
