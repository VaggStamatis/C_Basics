#include <stdio.h>
#include <stdlib.h>

int binary_search(int arr[], int l, int r, int x){
    while(l <= r){
        int m = l + (r-l) / 2;
        if(arr[m]==x){
            return m;
        }
        if(arr[m] < x){
            l = m+1;
        }else{
            r = m-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,5,6,8,10,16,19,26};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    int result = binary_search(arr,0, n-1,x);
    if(result == -1){
        printf("Value %d does not exist in the set array\n");
    }else{
        printf("Value %d is in position : %d on the set array\n", x, result);
    }
    return 0;
}