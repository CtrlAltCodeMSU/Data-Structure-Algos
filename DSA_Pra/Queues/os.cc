#include <iostream>
#include <unistd.h>  // For fork()

int main() {
    int x = 5; // Each process will have its own 'x'
    
    pid_t pid = fork(); // Creates a new process

    if (pid == 0) {
        // Child Process
        x = 10; 
        std::cout << "Child Process: x = " << x << std::endl;
    } else {
        // Parent Process
        std::cout << "Parent Process: x = " << x << std::endl;
    }

    return 0;
}