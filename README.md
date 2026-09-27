# C Programming & Data Structures

A structured, implementation-driven study of **C programming, problem solving, data structures, and algorithms**.

This repository documents my progression from programming fundamentals toward low-level data structures and algorithmic thinking, using **C99** and a rigorous, implementation-first approach.

The learning path is inspired by the progression and academic rigor of foundational computer science curricula such as **BITS Pilani CS F111 and CS F211**. It is an independent study project, not an official BITS Pilani course.

---

## 🎯 Purpose

The goal of this repository is not simply to collect C programs.

It is a study environment for developing:

* Programming fundamentals
* Problem-solving skills
* Algorithmic thinking
* Understanding of control flow and program state
* Memory and data representation awareness
* Data structure implementation
* Algorithm analysis and complexity
* Clean and disciplined C programming

The emphasis is on **understanding why a solution works**, not only whether the program compiles or produces the expected output.

---

## 📚 Learning Path

The repository follows a progression from programming fundamentals toward data structures and algorithms.

### CS F111 — Programming Foundations

Current focus:

* Variables and data types
* Input and output
* Arithmetic and relational operators
* Conditional statements
* Logical operators
* `switch`
* Iteration with `while`
* Counters and accumulators
* Problem decomposition
* Program state and control flow

Planned topics include:

* `for` and `do-while`
* Functions
* Arrays
* Strings
* Pointers
* Structures
* Dynamic memory allocation
* File handling

### CS F211 — Data Structures & Algorithms

Future progression:

* Algorithm analysis
* Searching
* Sorting
* Recursion
* Abstract data organization
* Linked lists
* Stacks
* Queues
* Trees
* Graphs
* Dynamic memory and pointer-based structures
* Time and space complexity

---

## 📈 Current Progress

The repository is currently in the **C programming fundamentals** stage.

Completed exercises include:

* Variables and arithmetic operations
* Number classification
* Sign and parity classification
* Range classification
* Logical operators
* `switch` statements
* `while` loops
* Accumulators
* Counters

The progression will continue incrementally rather than jumping directly into data structures.

---

## 🗂️ Repository Structure

```text
c-programming-and-data-structures/
├── cs-f111/
│   └── 01-basics/
│       ├── 01-memory-and-variables.c
│       ├── 02-number-classification.c
│       ├── 03-number-sign.c
│       ├── 04-number-range.c
│       ├── 05-logical-operators.c
│       ├── 06-logical-operators-classification.c
│       ├── 07-switch-menu.c
│       ├── 08-while.c
│       ├── 08-while-accumulator.c
│       └── 09-while-counter.c
├── build/
└── README.md
```

The repository will evolve as new topics are introduced.

---

## 🧪 Compilation

Programs are compiled using GCC with a strict warning configuration:

```bash
gcc -std=c99 -Wall -Wextra -Wpedantic -g \
    cs-f111/01-basics/09-while-counter.c \
    -o build/09-while-counter
```

Run the executable:

```bash
./build/09-while-counter
```

The project currently uses **C99** as the language standard.

---

## 🧠 Study Methodology

Each exercise follows a deliberate learning cycle:

```text
Problem
   ↓
Analysis
   ↓
Contract
   ↓
Implementation
   ↓
Code Review
   ↓
Correction
   ↓
Testing
   ↓
Git Commit
```

The objective is to develop the ability to reason about a program before writing it.

Particular attention is given to:

* Correctness
* Control flow
* Program state
* Edge cases
* Memory management
* Readability
* Time complexity
* Space complexity
* Appropriate use of C language constructs

---

## 🔬 Implementation Philosophy

The repository favors **classical procedural C** and explicit understanding of the underlying mechanisms.

As the study progresses, data structures will be implemented from the ground up using:

* `struct`
* pointers
* dynamic memory allocation
* `malloc`
* `free`
* explicit memory management

The goal is to understand the mechanisms behind data structures rather than relying on higher-level abstractions.

---

## 🛠️ Tooling

* **Language:** C99
* **Compiler:** GCC
* **Debugger:** GDB
* **Editor:** Visual Studio Code
* **Platform:** Linux
* **Version Control:** Git

---

## 📖 References & Inspiration

The learning progression is informed by classical computer science education and references such as:

* BITS Pilani — CS F111 / CS F211 curriculum structure
* Classical C programming and data structures literature
* Algorithm and data structure fundamentals

This repository represents an **independent study path** built around implementation, review, experimentation, and progressive difficulty.

---

## 🚧 Status

This repository is actively evolving.

The current priority is to build a strong programming foundation before advancing into increasingly complex data structures and algorithms.

> **The objective is not to finish a list of exercises.
> The objective is to learn how to think like a programmer.**
