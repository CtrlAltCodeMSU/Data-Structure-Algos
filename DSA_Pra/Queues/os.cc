// #include <iostream>
// #include <unistd.h>  // For fork()

// int main() {
//     int x = 5; // Each process will have its own 'x'
    
//     pid_t pid = fork(); // Creates a new process

//     for (int i = 0 ; i < 100 ; i ++){
//     if (pid == 0) {
//         // Child Process
//         x = 10; 
//         std::cout << "Child Process: x = " << x << std::endl;
//     } else {
//         // Parent Process
//         std::cout << "Parent Process: x = " << x << std::endl;
//     }
// }

//     return 0;
// }
#include <iostream>
#include <thread>

void taskA() {
    int localA = 10;  // Stored in thread A's stack
    std::cout << "Thread A: " << localA << std::endl;
}

void taskB() {
    int localB = 20;  // Stored in thread B's stack
    std::cout << "Thread B: " << localB << std::endl;
}

int main() {
    std::thread thread1(taskA);
    std::thread thread2(taskB);

    thread1.join();
    thread2.join();
    return 0;
}