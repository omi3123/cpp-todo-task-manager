#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
using namespace std;
class NoTaskAvailability : public exception {
    string message;
public:
    NoTaskAvailability(string msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};
class Task {
private:
    string title;
    bool completed;
public:
    Task(string t) : title(t), completed(false) {}
    void mark_complete() {
        completed = true;
    }
    string get_title() const {
        return title;
    }
    string get_status() const {
        return completed ? "Done" : "Not Done";
    }
    void display() const {
        cout << title << " - " << get_status() << endl;
    }
};
class ToDoList {
private:
    vector<Task> tasks;
public:
    void add_task(string title) {
        tasks.push_back(Task(title));
    }
    void remove_task(string title) {
        vector<Task> updated;
        for (auto& task : tasks) {
            if (task.get_title() != title)
                updated.push_back(task);
        }
        tasks = updated;
    }
    void mark_task_complete(string title) {
        for (auto& task : tasks) {
            if (task.get_title() == title) {
                task.mark_complete();
                break;
            }
        }
    }
    void show_tasks() {
        if (tasks.empty()) {
            throw NoTaskAvailability("No task is available");
        }
        for (auto& task : tasks) {
            task.display();
        }
    }
};
int main() {
    try {
        ToDoList todolist;
        todolist.add_task("Buy groceries");
        todolist.add_task("Complete Python project");
        todolist.add_task("Read a book");
        cout << "All Tasks:" << endl;
        todolist.show_tasks();
        todolist.mark_task_complete("Complete Python project");
        cout << "\nTasks after marking 'Complete Python project' as done:" << endl;
        todolist.show_tasks();
        todolist.remove_task("Buy groceries");
        cout << "\nTasks after removing 'Buy groceries':" << endl;
        todolist.show_tasks();
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}