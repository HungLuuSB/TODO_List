#include "Task.h"

#include <string>
#include <vector>


class TaskList
{
private:
    vector<Task> taskList;
public:
    TaskList();
    ~TaskList();

    void addTask(Task task);
    bool deleteTask(int index);
    Task getTask(int index);
    vector<Task> getTasks();
};