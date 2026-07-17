# Flight Info Linked List (C++)

A simple C++ program for managing flight data using a Singly Linked List (SLL). Built as a Data Structures course assignment, covering basic linked list operations like insert, delete, search, and sort applied to a flight data case.

## Features

Each flight record (`infotype`) stores:
- `flightNumber`: Flight number
- `departureCity`: Departure city
- `arrivalCity`: Arrival city
- `arrivalTime`: Arrival time

Linked list operations implemented:

| Function | Description |
|---|---|
| `Create_List` | Creates an empty list |
| `New_Elemen` | Creates a new node from flight data |
| `Insert_First` | Inserts a node at the beginning of the list |
| `Insert_Last` | Inserts a node at the end of the list |
| `Insert_After` | Inserts a node after a given node |
| `Delete_First` | Removes the first node |
| `Delete_Last` | Removes the last node |
| `Delete_After` | Removes the node after a given node |
| `SearchByFlightNumber` | Searches for a flight by flight number |
| `SortByFlightNumber` | Sorts the list by flight number |
| `Show` | Displays all records in the list |

## Project Structure

```
sll/
├── main.cpp        (main program, handles input and calls list functions)
├── SLL.cpp         (implementation of all linked list operations)
├── SLL.h           (struct declarations and function prototypes)
├── sll.cbp         (Code::Blocks project file)
└── sll.depend
```

## How to Run

### Using Code::Blocks
1. Open `sll.cbp` in Code::Blocks.
2. Build and run (`F9`).

### Using g++ (terminal)
```bash
g++ main.cpp SLL.cpp -o sll
./sll
```

## Program Flow

1. Enter flight 1 data, inserted at the beginning of the list (`Insert_First`).
2. Enter flight 2 data, inserted at the end of the list (`Insert_Last`).
3. Display all records in the list.
4. Search for a flight by flight number, then delete the node after it.
5. Sort the list by flight number.
6. Display the sorted list.

## Tech Stack

- Language: C++
- Data Structure: Singly Linked List
- IDE: Code::Blocks

## Author

Built as a course assignment implementing a Singly Linked List for flight data management.
