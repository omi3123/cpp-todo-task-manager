# C++ To-Do Task Manager ✅

An Object-Oriented C++ project for managing personal tasks.  
Allows users to add, remove, mark tasks as complete, and view task status.  
Custom exceptions are used for handling cases like when no tasks are available.

---

## 📌 Features

- ➕ Add new tasks  
- 🗑️ Remove existing tasks  
- ✔️ Mark tasks as complete  
- 📋 View all tasks with status (Done / Not Done)  
- ⚠️ Show error if no tasks available

---

## ⚠️ Exception Handling

- `NoTaskAvailability` — Raised when trying to view tasks but none exist

---

## 🧠 Concepts Used

- OOP in C++ (Classes, Objects, Encapsulation)  
- Boolean status flags  
- Exception handling with `throw`, `try`, and `catch`  
- Class interaction (e.g., `ToDoList` contains `Task` objects)  
- I/O with `cin` / `cout`

---

## ⚙️ How to Run

```bash
g++ todo-task.cpp -o todo-task
./todo-task
