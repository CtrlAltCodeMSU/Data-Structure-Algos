#include <iostream>
#include <stack>
using namespace std;

void pop(int value, stack<int>, int size)
{
    for (int i = 0; i < size; i++)
    {
    }
}
int main()
{
    stack<int> s;

    int value, size;
    cout << "Enter Size: ";
    cin >> size;
    cout << "Enter " << size << " Values for push: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Value " << (i + 1) << " : ";
        cin >> value;
        s.push(value);
    }

    cout << s.top() << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
// s.push(10);
// s.push(20);
// s.push(30);
// s.push(40);
// s.push(50);