#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef
    long long int
nite;

int jungleSequence (nite vecstr);
nite max (nite * vec, int elements);
nite min (nite * vec, int elements);
double mean (nite * v, int elementes);

int main (void){
    nite * vecFour;
    nite * vecImp;
    int x;
    int numElementsimp=0, numElementsfour=0;
    printf("Insert the number of elementes multiple of 4:");
    scanf("%d", &numElementsfour);
    printf("Insert the number of elementes multiple of imp:");
    scanf("%d", &numElementsimp);
    vecImp = (nite*) malloc(numElementsimp * sizeof(nite));
    vecFour = (nite*) malloc(numElementsfour * sizeof(nite));
    if (numElementsfour!=numElementsimp){
        printf("invalid value of thermes, the total is the same for thous");
    }
    else{
        for( int i=0; i<numElementsfour;i++){
            vecFour[i]=4*i;
        }
        vecImp[0]=1;
        for( int i=0; i<numElementsimp;i++){
            if (vecImp[i]%2!=0){
                vecImp[i+1]=vecImp[i]+2;
            }
            else{
                vecImp[i]=1;
            }   
        }
        for (int i=0;i<numElementsfour;i++){
            if(i==numElementsfour-1){
                x = vecImp[i]+vecFour[i];
                printf("%lld",x);
            }
            else {
                x = vecImp[i]+vecFour[i];
                printf("%lld, ",x);
            }

        }
    }
    free(vecFour);
    free(vecImp);
    return 0;
}

// int jungleSequence (nite vecstr){
//     return (nite) floor(sqrt((vecstr % 2 == 0)? vecstr : vecstr*vecstr*vecstr));
// }

// nite max (nite * vec, int elements){
//     nite max =vec[0];
//     for (int i=1; i<elements; i++){
//         if(vec[i]<max) max = vec[i];
//     }
//     return max;
// }

// nite min (nite * vec, int elements){
//     nite min =vec[0];
//     for (int i=1; i<elements; i++){
//         if(vec[i]>min) min = vec[i];
//     }
//     return min;
// }

// double mean (nite *vec, int elementes){
//     nite mean;
//     for(int i =0; i<elementes; i++){
//         mean += vec[i];
//     }
//     return ((double)mean)/elementes;
// }