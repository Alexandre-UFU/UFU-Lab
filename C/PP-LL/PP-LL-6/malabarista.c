#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef
    long long int
nite;

int jungleSequence (nite vecstr);
nite max (nite * vec, int elements);
nite min (nite * vec, int elements);
double mean (nite *v, int elementes);

int main (void){
    nite * vec;
    int x, numElemensts=0; nite numStart=0;
    scanf("%lli", &numStart);
    scanf("%d", &numElemensts);
    vec = (nite*) malloc(numElemensts * sizeof(nite));
    vec[0]=numStart;
    for( int i=1; i<numElemensts;i++){
        vec[i]=jungleSequence(vec[i-1]);
    }
    printf("mean of the numbers %lg    minimun obtence number: %lld   maximum obtence number %lld", mean(vec,numElemensts), min(vec,numElemensts), max(vec,numElemensts));
    free(vec);
    return 0;
}

int jungleSequence (nite vecstr){
    return (nite) floor(sqrt((vecstr % 2 == 0)? vecstr : vecstr*vecstr*vecstr));
}

nite max (nite * vec, int elements){
    nite max =vec[0];
    for (int i=1; i<elements; i++){
        if(vec[i]<max) max = vec[i];
    }
    return max;
}

nite min (nite * vec, int elements){
    nite min =vec[0];
    for (int i=1; i<elements; i++){
        if(vec[i]>min) min = vec[i];
    }
    return min;
}

double mean (nite *vec, int elementes){
    nite mean;
    for(int i =0; i<elementes; i++){
        mean += vec[i];
    }
    return ((double)mean)/elementes;
}