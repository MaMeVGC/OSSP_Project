#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = getpid();  // Get current process ID
    printf("The Process ID is: %d\n", pid);
    return 0;
}
