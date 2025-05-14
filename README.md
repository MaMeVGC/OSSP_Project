# OSSP_Project_Abraham_Abunu

This repository contains the documentation and implementation for the **Elive OS installation** process using VMware Workstation Player, along with a demonstration of the **`getpid()` system call** using a simple C program. This work was submitted as part of the Operating System and System Programming (OSSP) individual project at **Bahir Dar Institute of Technology**.

---

## Live Website  
Experience a live version of the documentation and demo:  
**[Elive OS Installation & System Call](https://ababu1212.github.io/OSSP_Project_Abraham_Abunu/)**

---

## Full Report (PDF with Screenshots)  
Download or view the detailed project report with step-by-step instructions and screenshots:  
**[Download Full PDF Report](https://github.com/Ababu1212/OSSP_Project_Abraham_Abunu/blob/main/OSSP_Individual_Abraham_Abunu_BDU1600595_A.pdf)**

---

## Installation Guide: Elive OS on VMware

### Requirements:
- **Elive OS ISO** ([Download](https://www.elivecd.org/))
- **VMware Workstation Player** (Free virtualization software)
- A host system with at least:
  - Dual-core processor
  - 2 GB RAM (for VM)
  - 20 GB free disk space

### Steps:

1. **Download Elive OS ISO** from [elivecd.org](https://www.elivecd.org/)
2. **Launch VMware Workstation Player** and click “Create a New Virtual Machine”
3. **Choose the ISO file** as installation media
4. **Manually set OS type** to:  
   - Operating System: Linux  
   - Version: Ubuntu 64-bit  
5. **Name your virtual machine** (e.g., `Elive_OS_Abraham`) and choose a storage path
6. **Allocate Resources**:  
   - Memory: 2 GB  
   - Processors: 2  
   - Disk: 20 GB (stored as a single file)
7. **Customize Hardware**:
   - Enable 3D acceleration (optional)
   - Network Adapter: NAT (default)
8. **Start the VM** and boot into the Elive OS Live environment
9. **Launch the Elive Installer** from the desktop
10. **Choose language and keyboard layout**
11. **Select partitioning**: use *Automatic Partitioning* for simplicity
12. **Configure user credentials and hostname**
13. **Complete the installation** and disconnect the ISO
14. **Reboot** to enter the fully installed Elive OS environment

---

## System Programming: `getpid()` System Call

# Linux System Call Project: `getpid()`

This project demonstrates the use of the **`getpid()` system call** using a simple C program. It was developed as part of the OSSP (Operating System and System Programming) course at **Bahir Dar Institute of Technology**.

---

## What is `getpid()`?

The `getpid()` system call returns the **process ID (PID)** of the currently running process. It helps identify and manage processes in Linux and is especially useful in debugging, logging, and multiprocessing environments.

---

## Full Implementation (Write, Compile, and Run)

### Step 1: Open a terminal and create the C file

```bash
nano abraham.c
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = getpid();  // Fetch current process ID
    printf("The Process ID is: %d\n", pid);
    return 0;
}
