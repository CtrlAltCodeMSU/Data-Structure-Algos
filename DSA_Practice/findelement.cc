#include <iostream>
using namespace std;

int main()
{
    int array[8] = {8, 9, 10, 14, 15, 23, 74, 23};
    int target = 74;
    bool found = false;
    for (int i = 0; i < 8; i++)
    {
        if (array[i] == target)
        {
            cout << "Target Found!";
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Element Not Found!";
    }
    return 0;
}