---
![Logo](logo-elive.png)

---
# Elive_OS 

This repository contains the documentation and implementation for the **Elive OS installation** process using VMware Workstation Player, along with a demonstration of the **`getpid()` system call** using a simple C program. 

--
## Elive OS Installation on VMware 
<details>
  <summary> Installation steps:</summary>

  ### Requirements:
  
<details>
  <summary>Requirement:</summary>

  - **Elive OS ISO** ([Download Official Website](https://www.elivecd.org/))
  - **VMware Workstation Player** (Free virtualization software)
  - A host system with at least:
    - Dual-core processor  
    - 2 GB RAM (for VM)  
    - 20 GB free disk space  

</details>

  ### Steps:
<details>
  <summary>Installation steps:</summary>
  
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

  - **Elive OS Installation in webpages with Screenshots**:  
    [View Elive OS Installation_steps in webpages with Screenshots](https://ababu1212.github.io/OSSP_Project_Abraham_Abunu/OS_installation.html)

</details>

</details>

--
## System Call Implementation: 
<details>
  <summary>System Call</summary>

  This project demonstrates the use of the `getpid()` system call in a Linux-based environment. It was completed as part of the OSSP (Operating System and System Programming) course at **Bahir Dar Institute of Technology**.

  ### Objective
  To implement and test the `getpid()` system call using a simple C program. This helps understand how system calls work and how processes are identified in Unix-like operating systems.

  ### Implementation Steps
<details>
  <summary>Steps</summary>

  1. Create a new C file (e.g., `abraham.c`)  
  2. Write the `getpid()` implementation code in the file:

      ```c
      #include <stdio.h>
      #include <unistd.h>

      int main() {
          pid_t pid = getpid();  // Get current process ID
          printf("The Process ID is: %d\n", pid);
          return 0;
      }
      ```

  3. Save and exit the file  
  4. Update system packages:

      ```bash
      sudo apt update
      sudo apt install build-essential
      ```

  5. Install the GCC compiler if it's not already installed  
  6. Compile the C program using GCC:

      ```bash
      gcc abraham.c -o abraham
      ```

  7. Run the compiled executable:

      ```bash
      ./abraham
      ```

  8. Observe the output showing the Process ID (PID).  
     Each run generates a different PID, demonstrating that a new process is created each time.
---
  [View System Call in webpages with Screenshots](https://ababu1212.github.io/OSSP_Project_Abraham_Abunu/System_call.html)

  </details>

</details>

---
## Additional Resources
<details>
  <summary>Details</summary>

  ### Live Website  
  Experience a website of the Elive OS installation and system call implementation:  
  **[Elive OS Installation & System Call](https://ababu1212.github.io/OSSP_Project_Abraham_Abunu/)**

  --
  

  ### Full Report (PDF with Screenshots)  
  Download or view the detailed project report with step-by-step instructions and screenshots:  
  **[Download Full PDF Report](https://github.com/Ababu1212/OSSP_Project_Abraham_Abunu/blob/main/OSSP_Individual_Abraham_Abunu_BDU1600595_A.pdf)**

</details>

---

# Author

**Abraham Abunu**  
Undergraduate Software Engineering Student  
**Bahir Dar Institute of Technology (BiT), Ethiopia**  

**Student ID:** BDU1600595  

**Skills:**  
- HTML, CSS, JavaScript  
- Git & GitHub  
- MySQL, Node.js  


**Interests:**  
- Front-End Development  
- Problem Solving  
- System Programming  
- Open Source Collaboration
- C Programming  
  

**Find Me Online:**  
- [GitHub](https://github.com/Ababu1212)  
- [LinkedIn](https://linkedin.com/in/abraham-abunu-056853343)  
- [Email](mailto:Abrahamabunu1995@gmail.com)



---

![Logo](download.jpeg)
---
