#include <stdio.h>
#include <stdlib.h>

int glomb(int number);
double mean (int *vec, int first, int last);


int main (int argc, char** argv){
    int * vec;
    int x=0, numElemensts=0, first=0, last=0;
    printf("insert first value: ");
    scanf("%d%*c", &first);
    printf("insert first last: ");
    scanf("%d%*C", &last);

    if(last<first){
        x=first;
        first=last;
        last=x;
    }

    vec =  malloc(last+1 * sizeof(int ));
    
    for( int i=0; i<=last; i++){
        vec[i]=glomb(i);
    }

    printf("first: %d\n",vec[first]);
    printf("last: %d\n",vec[last]);
    printf("mean: %lg\n",mean(vec, first, last));
    free(vec);
    return 0;
}

int glomb(int number){
    if(number==0){
        return 1;
    }
    return 1+glomb(number-glomb(glomb(number-1)-1));
}

double mean (int *vec, int first, int last){
    int mean=0;
    for(int i = first; i<=last; i++){
        mean += vec[i];
    }
    return ((double)mean)/(last+1-first);
}