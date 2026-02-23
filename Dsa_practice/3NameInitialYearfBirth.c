// Name initial and year of birth

// Enter Your First Letter: L
// Enter Your DOB: 01111950
// Output:
// First Letter: L
// DOB Year: 1950

#include<stdio.h>
int main () {
    
    printf("Enter first Alphabate of name: ");
    char c;
    scanf("%c", &c);
    printf("Enter your Date of Birth (DDMMYYYY): ");
    int dob;
    scanf("%d", &dob);   

    printf("First Letter: %c\n", c);
    printf("DOB Year: %d\n", (dob%10000));

    printf("\n\n");
    return 0;
}