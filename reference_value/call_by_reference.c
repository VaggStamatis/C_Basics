#include <stdio.h>

void call_by_reference(int *x, int *y){
    *x = 112;
    *y = 113;
}

int main() {
    int x = 10;
    int y = 20;
    call_by_reference(&x, &y);
    printf("Value of x after function call: %d\n", x);
    printf("Value of y after function call: %d\n", y);
}

// You can do the same by creating pointers for the integer values
// int main() {
//     int x = 10;
//     int y = 20;
//     int *p1 = &x;
//     int *p2 = &y;
//     call_by_reference(p1, p2);
//     printf("Value of x after function call: %d\n", x);
//     printf("Value of y after function call: %d\n", y);
// }