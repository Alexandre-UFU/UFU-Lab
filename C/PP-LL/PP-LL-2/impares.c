#include <stdio.h>
#include<math.h>


int main (void){
    int min, max;
    float test;
    printf("insert the minimun number to the max number you want to locate all the odd numbers: ");
    scanf("%d %d", &min, &max);
    for (int i = min; i<=max; i++){
        test = min%2;
        if (test>0){
            printf(" %d ",min);
            min+=1;
        }
        if (test==0){
            min+=1;

        }

        

    }
    return 0;
}