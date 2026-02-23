#include <stdio.h>
// n = 7658 => {7, 76, 765, 7658}
int main () {

    int num = 76585656;
    int temp = num;
    int div = 1;
    while (num > 0) {
        num /= 10;
        int result = temp / div;
        printf(" %d ", result);
        div = div * 10;

    }
    printf("\n");
    return 0;

}