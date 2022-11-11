#include <stdio.h>

int main(){
    float weight, height, IMC;
    printf("Insert the height: ");
    scanf ("%f", &height);
    printf("Insert the weight: ");
    scanf ("%f", &weight);
    IMC = height/(weight*weight);
    if (IMC<16){
        printf("%.2f (Perigo de vida)", IMC);
    }
    if (IMC>=16 && IMC<17){
        printf("%.2f (Muito abaixo do peso)", IMC);
    }
    if (IMC>=17 && IMC<18.5){
        printf("%.2f (Abaixo do peso)", IMC);
    }
    if (IMC>=18.5 && IMC<25){
        printf("%.2f (Peso normal)", IMC);
    }
    if (IMC>=25 && IMC<30){
        printf("%.2f (Acima do peso)", IMC);
    }
    if (IMC>=30 && IMC<35){
        printf("%.2f (Obesidade grau I)", IMC);
    }
    if (IMC>=35 && IMC<40){
        printf("%.2f (Obesidade grau II)", IMC);
    }    
    if (IMC>40) {
        printf("%.2f (Obesidade grau III)", IMC);
    }
    return 0;
}
