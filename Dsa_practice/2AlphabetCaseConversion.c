
// 2. Alphabet case conversion ...............
//       lowercase -> uppercase

#include<stdio.h>
// a:97 z: 122
int main() {

    char a ;
    scanf("%c", &a);
    if ((int)a >= 97 && (int)a <= 122) {
        a = (char)((int)a - 32);
    }
    printf("\n%c\n", a);

    return 0;
}
