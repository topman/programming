#include <stdio.h>
#include <malloc.h>
#include <math.h>

void print_array(int *array, int num){
    int i;
    for(i=0; i < num; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
int is_prime(int digit, int *map, int num){
   int up;
   int i;
   if (digit < 2){
       return 0;
   }
   if (digit < 4){
       return 1;
   }
   if (map[digit-1] != -1){
       return map[digit-1];
   }
   up = sqrt(digit) + 1;
   for(i=2; i < up; i++){
       if (digit % i == 0){
           map[digit-1] = 0;
           return 0;
       }
    }
    map[digit-1] = 1;
    return 1;
}

void print_prime(int start, int end, int *map, int num){
    int i;
    for(i=start; i<end+1; i++){
        if (is_prime(i, map, num)){
            printf("%d\n", i);
        }
    }
}

int main(){
    int num;
    int start, end;
    int i, j=0;
    int *array;
    int *map;
    int max = 0;
    scanf("%d", &num);
    array = (int *)malloc(num * 2 * sizeof(int));
    for(i=0; i<num; i++){
        scanf("%d %d", &start, &end);
        array[j] = start;
        array[j+1] = end;
        j += 2;
        if (max < end){
            max = end;
        }
    }

    // used as cache
    map = (int *)malloc(max * sizeof(int));
    for(i=0; i< max; i++){
        map[i] = -1;
    }
    for(i=0; i< num * 2; i+=2){
        print_prime(array[i], array[i+1], map, max);
        if (i < num * 2 -2){
            printf("\n");
        }
    }
    free(array);
    free(map);
    return 0;
}
