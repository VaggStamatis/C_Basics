/*
    TOPIC:      C knowledge refreshment
    CREATOR:    Evangelos Stamatis
    DATE:       27/6/2024
*/
#include <stdio.h>

int main() {
    printf("Enter an non negative integer : \n");
    int num;
    scanf("%d", &num);
    for (int i=0; i<num; i++){
        printf(" i=%d\n", i);
    }
    return 0;
}