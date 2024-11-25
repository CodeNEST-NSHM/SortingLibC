# Sorting Library in C

This repository demonstrates the implementation of sorting algorithms in C, organized into a reusable library. The project includes two sorting methods: **Bubble Sort** and **Quick Sort**, for both integer and floating-point arrays. The library is modular, with separate files for headers and implementations, and is designed to ensure clean and maintainable code.

---

## **Features**

- **Bubble Sort**
  - Sorts arrays of integers and floats using the Bubble Sort algorithm.
- **Quick Sort**
  - Sorts arrays of integers and floats using the Quick Sort algorithm.
- Organized library structure for reuse.
- Separate folders for header files (`headers/`) and implementations.

---

## **Project Structure**

```
.
├── headers/
│   ├── bubble_sort.c        # Bubble Sort implementation
│   ├── quick_sort.c         # Quick Sort implementation
│   ├── sorting.h            # Header file for the sorting library
├── main.c                   # Main program demonstrating the library
├── CMakeLists.txt           # Build file for CMake
└── README.md                # Project documentation
```

---

## **Getting Started**

### Prerequisites
Ensure you have the following installed:
- GCC (GNU Compiler Collection)
- CMake (version 3.10 or newer)

### **Building the Project**

1. **Clone the Repository**
   ```bash
   git clone <repository-url>
   cd <repository-folder>
   ```

2. **Create a Build Directory**
   ```bash
   mkdir build
   cd build
   ```

3. **Generate the Build Files**
   ```bash
   cmake ..
   ```

4. **Compile the Project**
   ```bash
   make
   ```

5. **Run the Executable**
   ```bash
   ./main
   ```

---

## **Usage**

### **Library Functions**

| Function                   | Description                                                                                  |
|----------------------------|----------------------------------------------------------------------------------------------|
| `void bubbleSortInt(int *arr, int n)` | Sorts an array of integers in ascending order using Bubble Sort.                         |
| `void bubbleSortFloat(float *arr, int n)` | Sorts an array of floats in ascending order using Bubble Sort.                           |
| `void quickSortInt(int *arr, int low, int high)` | Sorts an array of integers in ascending order using Quick Sort.                          |
| `void quickSortFloat(float *arr, int low, int high)` | Sorts an array of floats in ascending order using Quick Sort.                              |

### **Example Output**

For the `main.c` program:
```plaintext
Original array: 5 3 8 4 2 
Sorted array using Bubble Sort: 2 3 4 5 8 
Sorted array using Quick Sort: 1 5 7 8 9 10 
```

---

## **Customization**

- **Adding New Sorting Algorithms**
  1. Create a new `.c` file for the algorithm in the `headers/` folder.
  2. Add the function prototypes to `sorting.h`.
  3. Include the implementation in the library (`CMakeLists.txt`).

---

## **License**

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

## **Acknowledgements**

- [CMake Documentation](https://cmake.org/documentation/)
- [GNU Compiler Collection (GCC)](https://gcc.gnu.org/)

Happy Coding!