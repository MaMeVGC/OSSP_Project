# OSSP_Project_Abraham_Abunu

This repository contains documentation and implementation of the **Elive OS installation** process and a demonstration of the **`getpid()` system call**, developed for the OSSP individual project at Bahir Dar Institute of Technology.

---

## Live Website  
Experience the project live:  
[**Elive OS Installation & System Call**](https://ababu1212.github.io/OSSP_Project_Abraham_Abunu/)

---

## PDF Report with Screenshots  
View the full report including screenshots and step-by-step instructions:  
[**View or Download Full PDF**](https://github.com/Ababu1212/OSSP_Project_Abraham_Abunu/blob/main/OSSP_Individual_Abraham_Abunu_BDU1600595_A.pdf)

---

## Installation Guide (Elive OS on VMware)

1. **Download Elive OS ISO** from [elivecd.org](https://www.elivecd.org/)
2. **Create a new virtual machine** in VMware
3. Assign appropriate RAM, CPU, and storage
4. Boot using the Elive ISO
5. Follow the installer to complete setup
6. Configure the system and user account
7. Reboot and acess 

---

## System Call Demonstrated: `getpid()`

The project demonstrates the use of the **`getpid()`** system call, which retrieves the process ID of the currently running process.

### Example Code

```c
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = getpid();
    printf("The Process ID is: %d\n", pid);
    return 0;
}
