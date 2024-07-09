/*
    TOPIC:      C knowledge refreshment
    CREATOR:    Evangelos Stamatis
    DATE:       8/7/2024
*/
#include <stdio.h>

void selectionSort(int arr[], int n){
    for (int i=0; i<n-1; i++){
        int min_idx = i;
        for (int j=i+1; j<n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int arr[] = {64, 55, 66, 6, 69, 78, 22};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr , n);
    printf("Sorted Array: \n");
    for(int i=0; i<n; i++){
        printf("%d," , arr[i]);
    }
    return 0;
}