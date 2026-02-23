// f (x) = c(x − r0 )(x − r1 )(x − r2 ) 
// f(x) = (x^2 -r1x -r0x +r0r1)(x - r2)
// f(x) = x^3 - (r0 + r1)x^2 + r0r1x -r2x^2 +r1r2x + r0r2x - r0r1r2
// f(x) = x^3 - (r0 + r1 + r2)x^2 + (r0r1 + r1r2 + r2r0) - r0r1r2
// f(x) = a3x^3 + a2x^2 + a1x + a0
// a3 = 1, a2 = - (r0 + r1 + r2), a1 = (r0r1 + r1r2 + r2r0), a0 = - r0r1r2

#include <stdio.h>

int fxn (int a3, int a2, int a1, int a0, int x) {

    return (a3 * x * x * x) + (a2 * x * x) + (a1 * x) + (a0);
}

int main() {
    int r0, r1, r2;
    int a3, a2, a1, a0;

    // Input roots
    printf("Enter three integer roots (r0 r1 r2): ");
    scanf("%d %d %d", &r0, &r1, &r2);
    
    a3 = 1;
    a2 = -(r0 + r1 + r2);
    a1 = (r0 * r1) + (r1 * r2) + (r2 * r0);
    a0 = -(r0 * r1 * r2);

    printf("f(x) = %dx^3", a3);

    if (a2 >= 0)
        printf(" + %dx^2", a2);
    else
        printf(" - %dx^2", -a2);

    if (a1 >= 0)
        printf(" + %dx", a1);
    else
        printf(" - %dx", -a1);

    if (a0 >= 0)
        printf(" + %d", a0);
    else
        printf(" - %d", -a0);

    // Part B: Point-value representation {(x0 , f (x0 )), (x1 , f (x1 )), (x2 , f (x2 )), (x3 , f (x3 ))}.
    int x0, x1, x2, x3;
    printf("\n\nEnter four integer evaluation points (x0, x1, x2, x3): ");
    scanf("%d %d %d %d", &x0, &x1, &x2, &x3);

    if (
        x0 == r0 || x0 == r1 || x0 == r2 ||
        x1 == r0 || x1 == r1 || x1 == r2 ||
        x2 == r0 || x2 == r1 || x2 == r2 ||
        x3 == r0 || x3 == r1 || x3 == r2 
    ) {
        printf("\nError: Evaluation point cannot be a root.\n");
        return 0;
    }

    printf("{");
    printf("(%d, %d)", x0, (fxn(a3, a2, a1, a0, x0)));
    printf(", ");
    printf("(%d, %d)", x1, (fxn(a3, a2, a1, a0, x1)));
    printf(", ");
    printf("(%d, %d)", x2, (fxn(a3, a2, a1, a0, x2)));
    printf(", ");
    printf("(%d, %d)", x3, (fxn(a3, a2, a1, a0, x3)));
    printf(" }\n");


    


    printf("\n");

    return 0;
}
