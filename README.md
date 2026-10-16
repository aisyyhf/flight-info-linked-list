# Flight Info Linked List

A C++ program for managing flight data with a singly linked list. This was an assignment for a data structures course.

Each flight stores a flight number, departure city, arrival city, and arrival time.

## Features

- Insert a flight at the beginning, at the end, or after a given flight
- Delete the first, last, or a specific flight
- Search for a flight by flight number
- Sort flights by flight number
- Show all flights

## How to run

```bash
cd "Tugas SLL/sll"
g++ main.cpp SLL.cpp -o sll
./sll
```

On Windows, run `sll` instead of `./sll`.

## Files

- `SLL.h`: structs and function prototypes
- `SLL.cpp`: linked list operations
- `main.cpp`: input and program flow

## What I learned

- Building a singly linked list with pointers
- Inserting and deleting nodes at different positions
- Searching and sorting data inside a linked list
