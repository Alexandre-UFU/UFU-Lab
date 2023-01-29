#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int max (int * vec, int elements);
int min (int * vec, int elements);
double mean (int *v, int elementes);

int main (void){
    int *vec, number=0;
    printf("size of the vector:");
    scanf("%d%*c", &number);

    vec=malloc(number * sizeof(int ));
    srand(number);

    for(int i=0; i<number; i++){
        vec[i]=rand()%number;
    }
    for (int i=0; i<=number; i++){
        printf("mean of the numbers %d \n", vec[i]);
    }
    printf("mean of the numbers %lg    maximum obtence number: %d  minimun obtence number %d", mean(vec,number), min(vec,number), max(vec,number));
    // free(vec);
    return 0;
}

int max (int * vec, int elements){
    int max = vec[0];
    for (int i=1; i<elements; i++){
        if(vec[i]<max) max = vec[i];
    }
    return max;
}

int min (int * vec, int elements){
    int min = vec[0];
    for (int i=1; i<elements; i++){
        if(vec[i]>min) min = vec[i];
    }
    return min;
}

double mean (int *vec, int elementes){
    int mean=0;
    for(int i =0; i<elementes; i++){
        mean += vec[i];
    }
    return ((double)mean)/elementes;
}