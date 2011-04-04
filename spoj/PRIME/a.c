#include<stdio.h>
#include<malloc.h>


int main(){
    int SIZE = 100000000;
    int *arr;
    int i;
    arr = (int *)malloc(SIZE * sizeof(int));
    for (i=0; i<SIZE; i++)
        arr[i] = 100;
    sleep(15);
    free(arr);
    printf("%d %d", sizeof(int), sizeof(double));
    return 0;
}
