// #include <iostream>
// using namespace std;
// double fun(int n){
//     int i ;
//     double sum ;
//     if (n==0)
//     {
//         return 1.0 ;
//     }
//     else{
//         sum = 0.0 ;
//         for (int i = 0; i < n; i++)
//         {
//             sum += for(i) ;
//             return sum ;
//         }
        
//     }
    
// }
// int main(){
//     // int array[5] = {10,20,30,40,50};

//     // for (int i = 0; i < 5; i++)
//     // {
//     //     array[(i+2)%5]+= array[i] ;
//     // }
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     cout << array[i] << " " ;
//     // }
//     // int a = 0 ; 
//     // int i = N ;

//     // while (i>0)
//     // {
//     //     a+=i ;
//     //     a/=2 ;
//     // }    
//     // int array[] = {0,2.4,6,7,5,3};
//     // int n , result = 0 ;
//     // for ( n = 0; n < 5 ; n++)
//     // {
//     //     result += array[n] ;
//     // }
//     // cout << "Sum: " << result ;
    
//        return 0;
// }
#include <iostream>
using namespace std;

double fun(int n) {
    if (n == 0) {
        return 1.0;
    } else {
        double sum = 0.0;
        for (int i = 0; i < n; i++) {
            sum += fun(i); // Recursive call
        }
        return sum;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Result: " << fun(n) << endl;
    return 0;
}