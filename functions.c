/*
    TOPIC:      C knowledge refreshment
    CREATOR:    Evangelos Stamatis
    DATE:       27/6/2024
*/

#include <stdio.h>

int add_nums (int a, int b){
    return a+b;
}

int main(){
    int result = add_nums(3,4);
    printf("After function call the result is : %d\n", result);
    return 0;   
}