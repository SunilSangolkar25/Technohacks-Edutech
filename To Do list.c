#include <stdio.h>
#include <stdlib.h>

#define MAX_TASKS 10

void displayTasks(char tasks[][50], int taskCount) {
    printf("Tasks:\n");
    for (int i = 0; i < taskCount; ++i) {
        printf("%d. %s\n", i + 1, tasks[i]);
    }
    printf("\n");
}

void addTask(char tasks[][50], int *taskCount, const char *newTask) {
    if (*taskCount < MAX_TASKS) {
        sprintf(tasks[*taskCount], "%s", newTask);
        (*taskCount)++;
        printf("Task added successfully.\n\n");
    } else {
        printf("Task list is full. Cannot add more tasks.\n\n");
    }
}

int main() {
    char tasks[MAX_TASKS][50];
    int taskCount = 0;
    char newTask[50];

    int choice;
    do {
        printf("1. Display Tasks\n");
        printf("2. Add Task\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayTasks(tasks, taskCount);
                break;
            case 2:
                printf("Enter the new task: ");
                scanf("%s", newTask);
                addTask(tasks, &taskCount, newTask);
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n\n");
        }
    } while (choice != 0);

    return 0;
}
