/*
    TOPIC:      C knowledge refreshment
    CREATOR:    Evangelos Stamatis
    DATE:       9/7/2024
*/
#include <stdio.h>

int main() {
    printf("Hello world \n");

    //print current line
    printf("Line: %d\n", __LINE__);
    //reset the line number
    #line 332
    //this is linne 332
    printf("Line: %d\n", __LINE__);
    printf("Bye Bye World\n");
    return 0;
}