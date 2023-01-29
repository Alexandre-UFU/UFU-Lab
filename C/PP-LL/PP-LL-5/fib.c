#include <stdbool.h>
#include <stdio.h>

int fib(int amount);

int main() {
    int x=0, amount=0;
    printf("insert amount: ");
    scanf("%d", &amount);
    x=fib(amount);
    printf("%d",x);
    return 0;
}

//Os testes do arquivo pdf não estão certos eles estão retornando o valor anterior 

int fib(int amount){
    int nCurrent = 0;
    int nPrevious = 0;
    if(amount==2){
        nCurrent = 1;
        return nCurrent;
    }
    else{
        for (int index = 0; index < amount; index++) {
            if (index == 0) {
                continue;
            }
            else if (index == 1) {
                nPrevious = 0;
                nCurrent = 1;
            } 
            else {
                int sum = nPrevious + nCurrent;
                nPrevious = nCurrent;
                nCurrent = sum;
            }   
            bool loopFinal = (index + 1) == amount;
            if (loopFinal) {
                return nCurrent;
            }
        }
    }
}
