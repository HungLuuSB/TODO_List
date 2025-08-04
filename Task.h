#include <string>

using namespace std;

enum TASK_STATUS {
    COMPLETED,
    IN_PROGRESS
};


class Task
{
private:
public:
    Task(string description);
    ~Task();
    bool isMarkedImportant = false;
    TASK_STATUS status = IN_PROGRESS;
    string descripton;
    string getTaskDesciption();
    void setTaskDescription(string description);
    TASK_STATUS getTaskStatus();
    void markTaskAsImportant();
    void markTaskAsCompleted();
    void markTaskAsInProgress();
};
