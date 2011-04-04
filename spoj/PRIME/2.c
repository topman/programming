#include <stdio.h>
#include <malloc.h>
#include <math.h>

int is_prime(int digit){
   int up;
   int i;
   if (digit < 2){
       return 0;
   }
   if (digit < 4){
       return 1;
   }
   up = sqrt(digit) + 1;
   for(i=2; i < up; i++){
       if (digit % i == 0){
           return 0;
       }
    }
    return 1;
}

void print_prime(int start, int end){
    int i;
    for(i=start; i<end+1; i++){
        if (is_prime(i)){
            printf("%d\n", i);
        }
    }
}

int main(){
    int num;
    int start, end;
    int i;
    scanf("%d", &num);
    for(i=0; i<num; i++){
        scanf("%d %d", &start, &end);
        print_prime(start, end);
        if (i != num-1){
            printf("\n");
        }
    }
    return 0;
}
