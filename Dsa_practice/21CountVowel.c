// Count vowels and total characters
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter characters (press Enter to stop):\n");
    int charCount = 0;
    int vowelCount = 0;
    while ((ch = getchar()) != '\n')
    {
        charCount++;
        if (ch == 'a' ||
            ch == 'b' ||
            ch == 'c' ||
            ch == 'd' ||
            ch == 'e' ||
            ch == 'A' ||
            ch == 'B' ||
            ch == 'C' ||
            ch == 'D' ||
            ch == 'E'
        ) {
            vowelCount++;
        }
    }

    printf("\nThe number of vowels entered: %d\n", vowelCount);
    printf("\nThe total number of characters entered: %d\n", charCount);

    return 0;
}
