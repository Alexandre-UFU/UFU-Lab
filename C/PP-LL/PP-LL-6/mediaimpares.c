#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef
    long long int
nite;

int impNum (nite * vecstr, int elements);
double mean (nite *v, int elementes);

int main (void){
    nite * vec;
    int numElemensts=0; nite numStart=0;
    printf("Insert the number of elements: ");
    scanf("%d", &numElemensts);
    printf("insert the inicial number: ");
    scanf("%lli", &numStart);
    vec = (nite*) malloc((numElemensts+1) * sizeof(nite));
    numStart-=1;
    for(int i=1;i<=2;i++){
        if (numStart%2==0){
            numStart+=1;
        }
        else{
            vec[0]=numStart;
            for (int i=0; i<numElemensts; i++){
                vec[i+1]=vec[i]+2;
            }
            break;
        }
    }
    printf("the penultimate number: %lld \nmean of the numbers %lg", vec[numElemensts-1], mean(vec,numElemensts));
    free(vec);
    return 0;
}

double mean (nite *vec, int elementes){
    nite mean=0;
    for(int i =0; i<elementes; i++){
        mean += vec[i];
    }
    return ((double)mean)/elementes;
}