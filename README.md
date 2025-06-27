✅ C++ To-Do Task Manager

An Object-Oriented **C++** project for managing personal tasks.  
Users can add, remove, mark tasks as complete, and view the current task list.  
Custom exceptions are used for edge cases like when no tasks are available to display.

---

## 📌 Features

- ➕ Add New Tasks  
- 🗑️ Remove Existing Tasks  
- ✔️ Mark Tasks as Complete  
- 📋 View All Tasks with Status (Done / Not Done)  
- ⚠️ Show Error if No Tasks Available

---

## ⚠️ Exception Handling

- `NoTaskAvailability` – Raised when trying to view tasks but none exist  
- Exception handling implemented using `throw`, `try`, and `catch`  
- Clean user feedback for invalid task operations

---

## 🧠 Concepts Used

- Object-Oriented Programming (OOP)  
- Classes & Objects  
- Encapsulation  
- Boolean Status Flags  
- Exception Handling (`throw`, `try`, `catch`)  
- Class Composition (`ToDoList` contains `Task` objects)  
- Console Input/Output (`cin`, `cout`)

---

## ⚙️ How to Run

### 💻 Compile
```bash
g++ todo-task.cpp -o todo-task
▶️ Execute
bash
Copy
Edit
./todo-task
📝 Ensure a C++ compiler (like g++) is installed on your system.

📂 File Structure
bash
Copy
Edit
todo-task.cpp          # Main source code file
README.md              # Project documentation
👨‍💻 Author
Muhammad Umair Bashir
📧 umairbashir0319@gmail.com

🪪 License
This project is open-source and free to use for learning, academic, and personal use.
You are allowed to modify and share it with proper credits.
