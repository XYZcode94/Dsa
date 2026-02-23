#include <stdio.h>

int main()
{
    char name[20] = "Akshay Kumar";
    // printf("Enter your name: ");
    // scanf("%s", name);

    printf("Hello %s\n", name);
    printf("%c | %c | %c | %c |\n", name[5], name[6], name[7], name[15]);
    if (name[6] == name[15]) {
        printf("Same");
    }
    return 0;
}
