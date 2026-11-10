# Data Structures & Algorithms in C

From-scratch implementations of classic **data structures** and **algorithms** in **C**, written for learning and practice — no libraries, just pointers, arrays and recursion.

![C](https://img.shields.io/badge/C-A8B9CC?style=flat&logo=c&logoColor=black)

## 📦 Data Structures

| Structure | Implementation |
| --- | --- |
| **Linked List** | Singly linked list (`Data_structures/Linked_list/main.c`) |
| **Stack** | Stack implemented with arrays (`Data_structures/Stack/Stack_with_arrays`) |

## ⚙️ Algorithms

| Category | Algorithms |
| --- | --- |
| **Searching** | Binary Search |
| **Sorting** | Bubble Sort · Merge Sort · Selection Sort |

## 📁 Repository Structure

```
├── Data_structures/
│   ├── Linked_list/
│   │   └── main.c
│   └── Stack/
│       └── Stack_with_arrays/
└── Algorthims/
    ├── Searching_Algorthims/
    │   └── Binary_search/
    └── Sorting _Algorthims/
        ├── Buble_sort/
        ├── Merge_sort/
        └── Selection_Sort/
```

## 🚀 Compile & Run

Each implementation is a standalone C program. For example, the linked list:

```bash
cd Data_structures/Linked_list
gcc main.c -o main
./main
```

The same pattern applies to the other folders — compile the `.c` file with `gcc` and run the produced executable.
