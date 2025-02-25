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
// #include <iostream>
// using namespace std;
// class Counter
// {
// private:
// unsigned int count;
// public:
// //constructor
// Counter() : count(0) {}
// void inc_count(){
// count++;
// }
// int get_count(){
// return count;
// }
// };
// int main()
// {
// Counter c1;
// //define and initialize
// cout << "\nc1=" << c1.get_count();
// c1.inc_count();
// cout << "\nc1=" << c1.get_count()<<endl;
// return 0;
// }