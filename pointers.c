/*
    TOPIC:      C knowledge refreshment
    CREATOR:    Evangelos Stamatis
    DATE:       27/6/2024
*/

#include <stdio.h>

int main() {
    int var = 10;
    int *ptr = &var;

    printf("Value of var: %d\n", var);
    printf("Address of var is: %p\n", &var);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    var+= 100;

    printf("Values after addition to var");
    printf("Value of var: %d\n", var);
    printf("Address of var is: %p\n", &var);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    /*
        Value of var: 10
        Address of var is: 000000ccf0bff914
        Value of ptr: 000000ccf0bff914
        Value pointed by ptr: 10

        Values after addition to varValue of var: 110
        Address of var is: 000000ccf0bff914
        Value of ptr: 000000ccf0bff914
        Value pointed by ptr: 110   
    */

     
}