#include "TaskList.h"

TaskList::TaskList(){

};

void TaskList::addTask(Task task){
    taskList.push_back(task);
};

bool TaskList::deleteTask(int index){
    taskList.erase(taskList.begin() + index);
}

Task TaskList::getTask(int index){
    return taskList[index];
}

vector<Task> TaskList::getTasks(){
    return taskList;
}

TaskList::~TaskList(){
    taskList.empty();
}