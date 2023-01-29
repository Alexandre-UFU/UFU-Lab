#include <stdbool.h>
#include <stdio.h>

int fib(unsigned long long int seguence[] ,int amount);
void text(unsigned long long int sequence[] ,int amount);

int main() {
    int amount=0;

    printf("insert amount: ");
    scanf("%d", &amount);
    unsigned long long int sequence[amount];
        if (amount>94){
        printf("invalid value of amont, the max value is 94");
    }
    else {
        fib(sequence,amount);
        text(sequence,amount);
    }
    
    return 0;
}


int fib(unsigned long long int sequence[] ,int amount){
    unsigned long long int nCurrent = 0;
    unsigned long long int nPrevious = 1;
    int count=0;
    for(unsigned long long int i =0; amount>0; nCurrent= nPrevious, nCurrent=i, amount--,count++){
        i=nCurrent+nPrevious;
        sequence[count]=nCurrent;
    }
}

void text(unsigned long long int sequence[] ,int amount){
    FILE*textFibonacci;
    textFibonacci=fopen("Fibonacci.txt", "w");

    for (int i=0; i<amount; i++){
        fprintf(textFibonacci, "%llu\n", sequence[i]);
    }
    fclose(textFibonacci);
}   
