#include "Task.h"

Task::Task(string description){
    descripton = description;
};

string Task::getTaskDesciption(){
    return descripton;
}

void Task::setTaskDescription(string description){
    description = description;
}

TASK_STATUS Task::getTaskStatus(){
    return status;
}

void Task::markTaskAsImportant(){
    isMarkedImportant = !isMarkedImportant;
}

void Task::markTaskAsCompleted(){
    status = COMPLETED;
}

void Task::markTaskAsInProgress(){
    status = IN_PROGRESS;
}

Task::~Task(){
    
}