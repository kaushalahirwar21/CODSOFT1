#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ToDoList {
private:
    struct Task {
        string description;
        bool completed;

        Task(const string& desc) : description(desc), completed(false) {}
    };

    vector<Task> tasks;

public:
    void addTask(const string& task) {
        tasks.emplace_back(task);
    }

    void viewTasks() const {
        if (tasks.empty()) {
            cout << " NO TASKS IN THE TO-DO LIST " << endl; 
        } else {
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << tasks[i].description 
                     << " - " << (tasks[i].completed ? "DONE" : "PENDING") << endl;
            }
        }
    }

    void completeTask(size_t taskNumber) {
        if (taskNumber > 0 && taskNumber <= tasks.size()) {
            tasks[taskNumber - 1].completed = true;
            cout << "TASK " << taskNumber << " MARKED AS COMPLETED" << endl;
        } else {
            cout << "INVALID TASK NUMBER" << endl;
        }
    }

    void removeTask(size_t taskNumber) {
        if (taskNumber > 0 && taskNumber <= tasks.size()) {
            cout << "TASK '" << tasks[taskNumber - 1].description << "' REMOVED" << endl;
            tasks.erase(tasks.begin() + taskNumber - 1);
        } else {
            cout << "INVALID TASK NUMBER" << endl;
        }
    }
};

int main() {
    ToDoList todoList;
    int choice;

    while (true) {
        cout << "\n\n---TO-DO LIST MENU---";
        cout << "\n1.ADD TASK";
        cout << "\n2.VIEW TASK";
        cout << "\n3.MARK TASK AS A COMPLETED";
        cout << "\n4.REMOVE TASK";
        cout << "\n5.EXIT";

        cout << "\n\nENTER YOUR CHOICE: ";
        cin >> choice;

        if (choice == 1) {
            cin.ignore(); // To ignore the newline character left in the buffer
            string task;
            cout << "ENTER THE TASK: ";
            getline(cin, task);
            todoList.addTask(task);
        } else if (choice == 2) {
            todoList.viewTasks();
        } else if (choice == 3) {
            size_t taskNumber;
            cout << "ENTER THE TASK NUMBER TO MARK AS COMPLETED: ";  
            cin >> taskNumber;
            todoList.completeTask(taskNumber);
        } else if (choice == 4) {
            size_t taskNumber;
            cout <<" ENTER THE TASK NUMBER TO REMOVE:";
            cin >> taskNumber;
            todoList.removeTask(taskNumber);
        } else if (choice == 5) {
            break;
        } else {
            cout << "INVALID CHOICE PLEASE TRY AGAIN" << endl;
        }
    }

    return 0;
}
