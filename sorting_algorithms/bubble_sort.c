/*
    TOPIC:      C knowledge refreshment
    CREATOR:    Evangelos Stamatis
    DATE:       27/6/2024
*/

#include <stdio.h>

void bubble_Sort(int arr[] ,int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}

int main() {
    int array[] = {2,5,1,3,6,9,7,4,8};
    int lenght = sizeof(array)/sizeof(array[0]);  //size of the whole array inn bytes devided by the size of a single item -> outputs the size of the array as integer
    bubble_Sort(array , lenght);

    for(int i=0; i<lenght; i++){
        printf("%d," , array[i]);
    }
    return 0;

}