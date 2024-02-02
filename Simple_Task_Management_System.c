#include <stdio.h>
#include <stdlib.h>

#define MAX_TASKS 100
// Structure to store task details
struct Task {
    char description[100];
    int priority;
};

// Array to store tasks
struct Task tasks[MAX_TASKS];
// Variable to store the number of tasks
int taskCount = 0;

// Function to add a task
void addTask() {
    // Check if the maximum task limit has been reached
    if (taskCount < MAX_TASKS) {
        // Get task details from the user and store in the tasks array
        printf("Enter task description: ");
        scanf(" %[^\n]", tasks[taskCount].description);

        printf("Enter task priority (1-5): ");
        scanf("%d", &tasks[taskCount].priority);

        printf("Task added successfully!\n");
        // save tasks to file after adding a new task
        taskCount++;
     
    } else {
        printf("Task limit reached. Cannot add more tasks.\n");
    }
}

void viewTasks() {
    if (taskCount > 0) {
        printf("\nTask List:\n");
        for (int i = 0; i < taskCount; i++) {
            printf("%d. Priority %d: %s\n", i + 1, tasks[i].priority, tasks[i].description);
        }
    } else {
        printf("\nNo tasks available.\n");
    }
}

void saveTasksToFile() {
    FILE *file = fopen("tasks.txt", "w");

    if (file != NULL) {
        for (int i = 0; i < taskCount; i++) {
            fprintf(file, "%d %s\n", tasks[i].priority, tasks[i].description);
        }

        fclose(file);
        printf("Tasks saved to file.\n");
    } else {
        printf("Error opening file for writing.\n");
    }
}

void loadTasksFromFile() {
    FILE *file = fopen("tasks.txt", "r");

    if (file != NULL) {
        while (fscanf(file, "%d %[^\n]", &tasks[taskCount].priority, tasks[taskCount].description) != EOF) {
            taskCount++;
            if (taskCount >= MAX_TASKS) {
                break;
            }
        }

        fclose(file);
        printf("Tasks loaded from file.\n");
    } else {
        printf("No existing tasks file found.\n");
    }
}

int main() {
    int choice;
    // Display name Task Management System on opening of program
    printf("Task Management System\n");
    // Load tasks from file at the beginning
    loadTasksFromFile();
   
    do {
        printf("\nMenu:\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Save Tasks to File\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                saveTasksToFile();
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 4);

    return 0;
}
