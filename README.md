# C++ Geometric Shape Management & Custom Linked List Application

> **Course Assignment:** Sakarya University — Computer Engineering (2nd Year)  
> **Subject:** Data Structures (Assignment 1)

This project focuses on Object-Oriented Programming (OOP) principles and custom Data Structures (Singly & Doubly Linked Lists). 

The project demonstrates manual memory management, inheritance and polymorphism.

---

## 🛠️ Technical Highlights & Architecture

* **Custom Data Structures:** Implemented custom Singly Linked List (`TekYonluBagliListe`) and Doubly Linked List (`IkiYonluBagliListe`) from scratch for node-level data manipulation.
* **Object-Oriented Design (OOP):** Created a base `Sekil` (Shape) class extended by derived classes (`Dikdortgen`, `Ucgen`, `Yildiz`) to implement Polymorphism and Inheritance.
* **Modular Code Structure:** Clean separation between declaration headers (`.hpp`) and implementation source files (`.cpp`).
* **Build Automation:** Configured a custom `Makefile` to handle object file dependencies and streamline the build process.

---

## 📁 Repository Structure
```text
.
├── bin/            # Compiled executable binary (Program.exe)
├── doc/            # Project documentation and report
├── include/        # Header files (.hpp)
├── lib/            # Compiled object files (.o)
├── src/            # Source implementation files (.cpp)
└── makefile        # Build configuration and linking rules
```
---
## Execution (Requires a C++ compiler (`g++`) and `make`)
Clone the repository, navigate into the folder, and run `make` to compile the project. You can then run the executable using `./bin/Program.exe`:
```bash
make
./bin/Program.exe
```
