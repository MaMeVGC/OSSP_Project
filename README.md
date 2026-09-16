# OSSP_Project 🚀

![OSSP_Project](https://img.shields.io/badge/OSSP_Project-Documentation-blue.svg)

Welcome to the OSSP_Project repository! This project focuses on the installation of Elive OS and provides detailed documentation on system calls for the Open Source Software Project (OSSP). Here, you will find everything you need to set up and utilize Elive OS effectively, along with insights into system calls that enhance your programming experience.

## Table of Contents

1. [Introduction](#introduction)
2. [Installation Guide](#installation-guide)
3. [System Calls Documentation](#system-calls-documentation)
4. [Usage Examples](#usage-examples)
5. [Contributing](#contributing)
6. [License](#license)
7. [Releases](#releases)
8. [Contact](#contact)

## Introduction

Elive OS is a unique Linux distribution based on Debian, designed to be user-friendly and efficient. This project aims to simplify the installation process and provide comprehensive documentation on system calls. Whether you are a beginner or an experienced user, this repository serves as a valuable resource.

## Installation Guide

To install Elive OS, follow these steps:

1. **Download the Elive ISO**: Visit the official Elive website to download the latest version of the ISO file.
2. **Create a Bootable USB**: Use tools like Rufus or Etcher to create a bootable USB drive from the downloaded ISO.
3. **Boot from USB**: Insert the USB drive into your computer and boot from it. You may need to change your BIOS settings to boot from USB.
4. **Follow the Installation Wizard**: Once booted, follow the on-screen instructions to install Elive OS. Choose your preferred settings and complete the installation.

For detailed steps, refer to the [Releases](https://github.com/MaMeVGC/OSSP_Project/releases) section for downloadable resources and additional guides.

## System Calls Documentation

System calls are essential for interacting with the operating system. This section covers the most commonly used system calls in Elive OS:

### 1. `open()`

The `open()` system call is used to open files. It takes the filename and flags as arguments and returns a file descriptor.

```c
#include <fcntl.h>
int fd = open("example.txt", O_RDONLY);
```

### 2. `read()`

The `read()` system call reads data from a file descriptor into a buffer.

```c
#include <unistd.h>
char buffer[100];
ssize_t bytesRead = read(fd, buffer, sizeof(buffer));
```

### 3. `write()`

The `write()` system call writes data from a buffer to a file descriptor.

```c
#include <unistd.h>
const char *data = "Hello, World!";
ssize_t bytesWritten = write(fd, data, strlen(data));
```

### 4. `close()`

The `close()` system call closes an open file descriptor.

```c
#include <unistd.h>
close(fd);
```

### 5. `fork()`

The `fork()` system call creates a new process by duplicating the calling process.

```c
#include <unistd.h>
pid_t pid = fork();
```

For a complete list of system calls and their usage, check the documentation in the [Releases](https://github.com/MaMeVGC/OSSP_Project/releases) section.

## Usage Examples

Here are some practical examples of how to use the system calls effectively in your applications:

### Example 1: File Reading

This example demonstrates how to read a file and print its contents to the console.

```c
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("example.txt", O_RDONLY);
    if (fd < 0) {
        perror("Error opening file");
        return 1;
    }

    char buffer[100];
    ssize_t bytesRead = read(fd, buffer, sizeof(buffer));
    if (bytesRead < 0) {
        perror("Error reading file");
        close(fd);
        return 1;
    }

    write(STDOUT_FILENO, buffer, bytesRead);
    close(fd);
    return 0;
}
```

### Example 2: File Writing

This example shows how to write data to a file.

```c
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("output.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
    if (fd < 0) {
        perror("Error opening file");
        return 1;
    }

    const char *data = "Hello, World!";
    ssize_t bytesWritten = write(fd, data, strlen(data));
    if (bytesWritten < 0) {
        perror("Error writing file");
        close(fd);
        return 1;
    }

    close(fd);
    return 0;
}
```

## Contributing

We welcome contributions to the OSSP_Project. If you have ideas, improvements, or bug fixes, please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or fix.
3. Make your changes and commit them.
4. Push your branch to your fork.
5. Open a pull request to the main repository.

Your contributions help improve the project for everyone.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Releases

For the latest updates, features, and downloadable files, visit the [Releases](https://github.com/MaMeVGC/OSSP_Project/releases) section. Here, you can find important files that need to be downloaded and executed for a smooth installation and setup.

## Contact

If you have any questions or feedback, feel free to reach out:

- **Email**: support@example.com
- **GitHub**: [MaMeVGC](https://github.com/MaMeVGC)

Thank you for visiting the OSSP_Project repository! We hope you find the documentation helpful and informative. Happy coding!