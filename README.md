# C++ Basics and Algorithms

This folder contains several basic C++ programs demonstrating array operations, searching algorithms, sorting algorithms, and pattern printing.

## Files Overview

### Sorting Algorithms
* **`bubbleSort.cpp`**: Implements the **Bubble Sort** algorithm. It takes an array size and its elements as input from the user, sorts the array in ascending order, and prints the sorted array.
* **`SelectionSort.cpp`**: Implements the **Selection Sort** algorithm. It takes an array as input, sorts it by repeatedly finding the minimum element from the unsorted part and putting it at the beginning, and prints the sorted result.

### Searching Algorithms
* **`LinearSearch.cpp`**: Implements the **Linear Search** algorithm. It takes an array and a search key from the user, searches for the key sequentially, and outputs its index if found.
* **`BinarySearch.cpp`**: Implements the **Binary Search** algorithm. Since binary search requires a sorted array, the program first sorts the user-provided array (using bubble sort) before performing the search to find the index of the given key.

### Array Operations & Patterns
* **`2dArray.cpp`**: Demonstrates the initialization and printing of a static 2D array (a 3x4 matrix).
* **`Steric.cpp`**: Prints a histogram-like asterisk (`*`) pattern based on the values in an array. For every number `n` in the user-provided array, it prints `n` asterisks on a new line.
* **`VowelInArray.cpp`**: Checks if **all 5 vowels** (`a, e, i, o, u`, case-insensitive) are present in a given character array. It outputs a confirmation message if all vowels exist, or a failure message otherwise.

## How to Compile and Run
You can compile these files using any standard C++ compiler such as `g++`. For example:

```bash
g++ bubbleSort.cpp -o bubbleSort
./bubbleSort
```
