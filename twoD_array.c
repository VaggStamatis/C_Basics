/*
    TOPIC:      C knowledge refreshment
    CREATOR:    Evangelos Stamatis
    DATE:       27/6/2024
*/

#include <stdio.h>

int main() {
    int matrix[5][5];

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            matrix[i][j] = i+j;
        }
    }

    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("Element[%d][%d]= %d \n",i,j,matrix[i][j]);
        }
    }
}