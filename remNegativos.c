#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>


int main(void) {
    int n, x=0, y=0;
    printf("Quantos elementos? ");
    scanf("%d", &n);
    float vetor[n];
    for(int i = 0; i < n; i++) {
        printf("Informe elemento %d: ", i+1);
        scanf("%f", vetor + i);
    }
    for(int i=0; i<n; i++){
        if (vetor[i]>0){
            if (x==0){
                printf("%g", vetor[i]);
                x=1;
            }
            else{
                printf(", %g", vetor[i]);
                x+=1;
            }
        }
        if(vetor[i]<0){
            if (y==0){
                y+=1;
            }
            continue;
            
        }
        else{
            y=1;
        }

        
            
    }
    if (y!=0){
        if(x==0){
            printf("vazio");
        }
    }
    return 0;
}