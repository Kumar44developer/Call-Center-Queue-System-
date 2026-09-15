# 📞 Call Center Queue System

A terminal-based customer service queue simulator written in C. The program models call center ticket handling using a dynamic **Circular Queue** (FIFO — First-In, First-Out) data structure with modulo arithmetic, real-time boundary validation, and dynamic memory allocation.

---

## Overview

In call center management, incoming calls must be answered in the exact order they are received while maintaining optimal memory utilization. This system implements a circular buffer where available slots are reused efficiently without requiring costly array element shifts, supporting dynamic queue sizing set by the user at runtime.

---

## Features

- **Dynamic Queue Allocation**: Initializes queue buffer size dynamically at launch using `malloc()`.
- **Add New Call (Enqueue)**: Enters incoming customer ticket IDs into the queue with overflow protection when capacity is reached.
- **Serve Next Call (Dequeue)**: Processes and discharges the longest-waiting caller at the front of the queue with underflow detection.
- **Display Waiting Calls**: Displays all active calls currently waiting in the queue in chronological arrival order.
- **Circular Buffer Optimization**: Employs `(index + 1) % size` pointer arithmetic to reuse freed positions seamlessly.
- **Safe Memory Deallocation**: Releases all allocated memory upon exit to ensure zero memory leaks.

---

## Tech Stack

| Component | Specification |
| --- | --- |
| Language | C (C99 standard or higher) |
| Data Structure | Dynamic Circular Queue (FIFO) |
| Memory Management | `malloc()` and `free()` from `<stdlib.h>` |
| Interface | Command Line Interface (CLI) |

---

## Project Structure

```
Call-Center-Queue-System-/
├── CallCenter.c     
└── README.md        
```

---

## Getting Started

### Prerequisites

You need a C compiler such as GCC, Clang, or MSVC installed on your machine.

To check if GCC is installed:

```bash
gcc --version
```

### Installation

Clone the repository to your local machine:

```bash
git clone https://github.com/Kumar44developer/Call-Center-Queue-System-.git
```

### Compile & Run

1. Navigate into the project folder:

   ```bash
   cd Call-Center-Queue-System-
   ```

2. Compile the source code using GCC:

   ```bash
   gcc CallCenter.c -o CallCenter
   ```

3. Run the compiled executable:

   - **On Windows:**

     ```bash
     CallCenter.exe
     ```

   - **On Linux / macOS:**

     ```bash
     ./CallCenter
     ```

---

## Sample Execution

```text
Enter size of queue: 3

--- Call Center Queue System ---
1. Add New Call (Enqueue)
2. Serve Next Call (Dequeue)
3. Display Waiting Calls
4. Exit
Enter your choice: 1
Enter Ticket Number: 101

--- Call Center Queue System ---
1. Add New Call (Enqueue)
2. Serve Next Call (Dequeue)
3. Display Waiting Calls
4. Exit
Enter your choice: 1
Enter Ticket Number: 102

--- Call Center Queue System ---
1. Add New Call (Enqueue)
2. Serve Next Call (Dequeue)
3. Display Waiting Calls
4. Exit
Enter your choice: 3
Waiting Calls in Queue:
Ticket #101
Ticket #102

--- Call Center Queue System ---
1. Add New Call (Enqueue)
2. Serve Next Call (Dequeue)
3. Display Waiting Calls
4. Exit
Enter your choice: 2
Ticket #101 has been deleted.

--- Call Center Queue System ---
1. Add New Call (Enqueue)
2. Serve Next Call (Dequeue)
3. Display Waiting Calls
4. Exit
Enter your choice: 3
Waiting Calls in Queue:
Ticket #102

--- Call Center Queue System ---
1. Add New Call (Enqueue)
2. Serve Next Call (Dequeue)
3. Display Waiting Calls
4. Exit
Enter your choice: 4
Exiting program...
```

---

## Author

**Kumar44developer** — [GitHub Profile](https://github.com/Kumar44developer)
