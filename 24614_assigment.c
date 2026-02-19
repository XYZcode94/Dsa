#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>

#define NOT_FOUND 255

int main() {
    int arr[30], key1, key2;
    pid_t p1, p2;
    int status1, status2;

    // Initialize array with random values
    srand(time(NULL));
    printf("Array Elements:\n");
    for (int i = 0; i < 30; i++) {
        arr[i] = rand() % 50 + 1;
        printf("%d ", arr[i]);
        if (i == 14) printf("| ");
    }
    printf("\n");

    // Input search keys
    printf("\nEnter Key 1 to search in 1st half: ");
    scanf("%d", &key1);
    printf("Enter Key 2 to search in 2nd half: ");
    scanf("%d", &key2);

    // Fork Child 1
    p1 = fork();
    if (p1 < 0) {
        perror("Fork failed");
        return 1;
    }

    if (p1 == 0) { // Child 1
        for (int i = 0; i < 15; i++) {
            if (arr[i] == key1) {
                exit(i + 1);
            }
        }
        exit(NOT_FOUND);
    }

    // Parent waits for Child 1
    waitpid(p1, &status1, 0);
    if (WIFEXITED(status1)) {
        int res1 = WEXITSTATUS(status1);
        if (res1 == NOT_FOUND)
            printf("Child 1: Key %d not found in the first half.\n", key1);
        else
            printf("Child 1: Key %d found at index %d.\n", key1, res1 - 1);
    }

    // Fork Child 2
    p2 = fork();
    if (p2 < 0) {
        perror("Fork failed");
        return 1;
    }

    if (p2 == 0) { // Child 2
        for (int i = 15; i < 30; i++) {
            if (arr[i] == key2) {
                exit(i + 1);
            }
        }
        exit(NOT_FOUND);
    }

    // Parent waits for Child 2
    waitpid(p2, &status2, 0);
    if (WIFEXITED(status2)) {
        int res2 = WEXITSTATUS(status2);
        if (res2 == NOT_FOUND)
            printf("Child 2: Key %d not found in the second half.\n", key2);
        else
            printf("Child 2: Key %d found at index %d.\n", key2, res2 - 1);
    }

    return 0;
}