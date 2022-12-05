#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>



int main(void) {
    int n, x=0, y=0, z;
    float max=0, min=0;
    printf("Quantos elementos? ");
    scanf("%d", &n);
    float vetor[n];
    z=n-1; 
    float result[z];
    for(int i = 0; i < n; i++) {
        printf("Informe elemento %d: ", i+1);
        scanf("%f", vetor + i);
    }
    for(int i = 0; i<n; i++){
        if (vetor[i]!=vetor[n]){
            result[i] = vetor[i+1]-vetor[i];
        }
        else{
            continue;
        }
    }
    for(int i =0; i<z; i++){
        if(i!=0){
            if(result[i]>max){
                max=result[i];
            }
            if(result[i]<min){
                min=result[i];
            }
            if(result[i]==min){
                continue;
            }
            if(result[i]==max){
                continue;
            }
        }
        else{
            min = result[i];
            max = result[i];
        }
    }   
    printf(" %g", result[0]);
    for(int i = 1; i < z; i++){
        printf(", %g ", result[i]);
    }
    printf("min: %g max: %g",min, max);
    return 0;    
}   

