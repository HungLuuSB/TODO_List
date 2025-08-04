#include <iostream>
#include "TaskList.h"
#include <iomanip>

const char char_sep = ' ';
const int id_width = 4;
const int description_width = 50;
const int status_width = 15;
const int important_width = 15;

void displayHeader(){
    cout << "|";
    cout << right << setw(id_width - 2) << setfill(char_sep) << "ID";
    cout << "|";
    cout << left << setw(description_width - 2) << setfill(char_sep) << "Description";
    cout << "|";
    cout << right << setw(status_width - 2) << setfill(char_sep) << "Status";
    cout << "|";
    cout << right << setw(important_width - 2) << setfill(char_sep) << "Important";
    cout << "|" << endl;
    cout << setw(id_width + description_width + status_width + important_width - 3) << setfill('-') << "" << endl;
};

void displayTask(int id, string description, string status, bool isImportant){
    cout << "|";
    cout << right << setw(id_width - 2) << setfill(char_sep) << id;
    cout << "|";
    cout << left << setw(description_width - 2) << setfill(char_sep) << description;
    cout << "|";
    cout << right << setw(status_width - 2) << setfill(char_sep) << status;
    cout << "|";
    cout << right << setw(important_width - 2) << setfill(char_sep) << isImportant;
    cout << "|" << endl;
};

void displayTasks(vector<Task> tasks){
    int count = 0;
    string status = "";
    displayHeader();
    for (Task task: tasks){
        switch (task.getTaskStatus())
        {
        case IN_PROGRESS:
            status = "In Progress";
            break;
        case COMPLETED:
            status = "Completed";
            break;
        default:
            status = "Unknown";
            break;
        };
        displayTask(count, task.getTaskDesciption(), status, task.isMarkedImportant);
        count++;
    }
    ~count;
    delete &status;
};

int main(){
    TaskList taskList;
    Task task = Task("Iu Tuan Phuong");
    taskList.addTask(task);
    displayTasks(taskList.getTasks());
    return 0;
};