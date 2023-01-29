#include <stdbool.h>
#include <stdio.h>
#include <math.h>

float pi (int * amount);

int main() {
    int aproximation =0;
    float x = 0;
    printf("insert a aproximatiom: ");
    scanf("%d", &aproximation);
    if (aproximation==0){
        printf (" aproximation is 4");
    }
    else{
        x=pi(aproximation);
        printf("%f",x);
    }
}

//Os testes do arquivo pdf não estão certos eles estão retornando o valor anterior 

float pi (int * aprox){
    float z=0, sum =4, y = (-1), mult=0; 
    for (int i=1; i<=aprox;i++){
        y=pow(y,i);
        mult = ((2*i)+1);
        z = 4*((y)/mult);
        sum+=z;
        y=(-1);
    } 
    return sum;
}