# Kernel 2D Memcpy System Call

## About

This project implements a system call for copying a 2D floating-point matrix from one location to another within the kernel space. The system call utilizes kernel functions like `copy_from_user()` and `copy_to_user()` to read data bytes from user space and write them back to user space. Essentially, this is a version of `memcpy()` that leverages the kernel to perform the necessary copy operations, which are usually handled directly in user space using standard C library routines.


### File Descriptions

- **copytest.c**
  - **Description**: A sample program designed to test the newly implemented system call. This program uses a hard-wired source 2D matrix to verify the functionality of the system call.

- **file.diff**
  - **Description**: Contains the differences between the stock kernel and the kernel with the added system call. This diff file can be applied as a patch to any stock kernel code to incorporate the required functionality.

## How to Use

### Patching the Kernel

1. Apply the patch using the `file.diff`:
    ```bash
    patch -p1 < file.diff
    ```

2. Rebuild and install the patched kernel following your standard kernel build process.

### Testing the System Call

1. Compile the `copytest.c` file:
    ```bash
    gcc -o copytest copytest.c
    ```

2. Run the `copytest` program to test the system call:
    ```bash
    ./copytest
    ```

### Kernel Functions

- `copy_from_user()`: Used to read data from user space.
- `copy_to_user()`: Used to write data back to user space.

These functions ensure that the data transfers are safe and managed by the kernel, thus preventing any unauthorized access or memory corruption.


---

For any questions or support, please open an issue on the GitHub repository.

---

Happy coding!
