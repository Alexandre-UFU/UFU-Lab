#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

float media(float * vetor, int tamanho);
float desv(float * vetor, int tamanho);

int main(void) {
    int n;
    printf("Quantos elementos? ");
    scanf("%d", &n);
    float vetor[n]; // específico do C99
    for(int i = 0; i < n; i++) {
        printf("Informe elemento %d: ", i+1);
        scanf("%f", vetor + i);
    }
    printf("média: %g\n", media(vetor, n));
    printf("desvio-padrão: %g", desv(vetor, n));
    return 0;
}

float media(float * vetor, int tamanho) {
    float s = 0, x;
    for(int i = 0; i < tamanho; i++) 
        s += vetor[i];
    x = s/tamanho;
    return x;
}

float desv(float * vetor, int tamanho) {
    float s = 0;
    for(int i = 0; i < tamanho; i++) 
        s += vetor[i];
    float x=0, y=0, z=0, a=0, b=0;
    x = s/tamanho;
    for(int i =0; i<tamanho; i++)
        y= vetor[i]-x;
        z += pow(y,2);
    a = z/tamanho;
    b = pow(z,0.5);
    return b;
}