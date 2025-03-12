#include <iostream>
#include <queue>
using namespace std;
struct Patient{
 string name;
 int severity;
 int arrivalTime;

 bool operator <(const Patient& p) const {
    if(severity==p.severity){
        return arrivalTime > p.arrivalTime ;
    } return 
 }
};
int main(){
    
    return 0;
}