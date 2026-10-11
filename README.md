# C Programs Library

A collection of foundational C programming implementations demonstrating classical algorithms, data structures, recursion, file input/output operations, and matrix mathematics.

---

## Student Details
- **Name:** Sankalp Mahesh Pujari
- **Roll Number:** 2303051

---

## List of Programs

| File Name | Program Name | Description |
| :--- | :--- | :--- |
| `bubble_sort.c` | Bubble Sort | Sorts an array of integers in ascending order using pairwise adjacent comparisons and swapping. |
| `linear_search.c` | Linear Search | Sequentially traverses an array to find the index of a specified target element. |
| `factorial.c` | Factorial (Recursion) | Computes the factorial of non-negative integers using recursive function calls. |
| `file_io.c` | File I/O Operations | Demonstrates writing formatted text to a file (`fopen`, `fputs`) and reading it back (`fgets`, `fclose`). |
| `matrix_multiplication.c` | Matrix Multiplication | Multiplies two matrices of dimensions (2x3 and 3x2) and displays the resulting product matrix (2x2). |
| `binary_search.c` | Binary Search | Efficiently searches for a target element in a sorted array using divide-and-conquer in $O(\log n)$ time. |

---

## Instructions to Compile and Run

Make sure you have a C compiler such as `gcc` or `clang` installed on your system.

### 1. Compile a Program
Open your terminal (or Git Bash / Command Prompt) in this directory and execute:
```bash
gcc <filename>.c -o <output_name>
```

**Examples:**
```bash
# Compile Bubble Sort
gcc bubble_sort.c -o bubble_sort

# Compile Linear Search
gcc linear_search.c -o linear_search

# Compile Factorial
gcc factorial.c -o factorial

# Compile File I/O
gcc file_io.c -o file_io

# Compile Matrix Multiplication
gcc matrix_multiplication.c -o matrix_multiplication

# Compile Binary Search
gcc binary_search.c -o binary_search
```

### 2. Run the Compiled Executable
On Windows:
```cmd
bubble_sort.exe
```
On Linux / macOS / Git Bash:
```bash
./bubble_sort
```
