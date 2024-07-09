/*
    TOPIC:      C knowledge refreshment
    CREATOR:    Evangelos Stamatis
    DATE:       27/6/20σ24
*/

#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("example.txt" , "w");

    //check if file opened successfuly
    if(fptr == NULL){
        printf("Error opening file! \n");
        return 1;
    }

    fprintf(fptr, "Writing inside the file\n");
    fprintf(fptr, "Writing second line WOW \n");
    fclose(fptr);
    return 0;
}