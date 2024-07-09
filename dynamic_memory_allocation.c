/*
    TOPIC:      C knowledge refreshment
    CREATOR:    Evangelos Stamatis
    DATE:       27/6/2024
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *) malloc(5 *sizeof(int));
    
    //chech if memory allocated correct
    if(ptr == NULL){
        printf("Memory not allocated.\n");
        exit(0);
    }
    for (int i=0; i<5; i++){
        ptr[i] = i+1;
    }
    for (int i=0; i<5; i++){
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}