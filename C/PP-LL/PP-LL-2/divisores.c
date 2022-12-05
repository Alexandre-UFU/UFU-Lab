#include <stdio.h>
#include <math.h>

int main (void){
    int num;
    printf("insert a positive number you want to find all the dividers froam the numbers: ");
    scanf("%d", &num);
    for (int i = 1; i<=num; i++){
        if ((num%i)==0){
            if (num==i){
                printf(" %d", i);
            }
            else{
                printf(" %d,", i);
            }
        }
    }
    return 0;
}