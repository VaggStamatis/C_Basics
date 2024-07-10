#include <stdio.h>

void call_value(int x, int y){
    x = 133;
    y =144;
}

int main(){
    int x = 10;
    int y = 20;
    call_value(x,y);
    printf("Value of x after function call: %d\n", x);
    printf("Value of y after function call: %d\n", y);
    return 0;
}