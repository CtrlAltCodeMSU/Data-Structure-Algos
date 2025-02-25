#include <iostream>
using namespace std;

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int key = 5;
    bool set = false;

    for (int i = 0; i < 5; i++)
    {
        if (array[i] == key)
        {
            cout << "Element found at index: " << i << endl;
            set = true;
            break;
        }
    }
    if (!set)
    {
        cout << "Element Not found!"<< endl ;
    }

    return 0;
}