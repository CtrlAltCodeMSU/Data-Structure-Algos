#include <iostream>
using namespace std;
class Candidate{
public:
    string name;
    int experience;

    Candidate(string n, int exp) : name(n) , experience(exp) {}
    bool operator<(const Candidate& c) const {
        return experience < c.experience ;
    }
};
int main(){
    Candidate c1("Alice", 5);
    Candidate c2("Bob", 3);

    if (c1 < c2)
        cout << c1.name << " has less experience than " << c2.name << endl;
    else
        cout << c1.name << " has more experience than " << c2.name << endl;
    return 0;
}