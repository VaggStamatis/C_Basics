#include <stdio.h>

int linear_search(int arr[], int n, int x){
    for (int i =0; i<n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,6,8,1,0,3,9,4,10,42,5,7,81};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 4;
    int result = linear_search(arr,n,x);
    if(result == -1){
        printf("Value %d does not exist in the set array\n");
    }else{
        printf("Value %d is in position : %d on the set array\n", x, result);
    }
    return 0;
}