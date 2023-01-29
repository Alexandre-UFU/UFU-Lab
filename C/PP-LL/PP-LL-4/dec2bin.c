#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

#define N 1024

typedef
    struct Bin {
        int decimal;
        char * string;
    }
Bin;

char * binaryConvert(int decimal);

int main(void){
    Bin bin;
    printf("Enter a decimal number to convert to binary: ");
    scanf("%d", &bin.decimal);
    bin.string = binaryConvert(bin.decimal);
    printf("Binary Number: %s\n", bin.string);
    free(bin.string);
    return 0;
}

char * binaryConvert(int decimal){
    int x=decimal;
    int nbits =x? 0:1;
    while(x){x/=2;nbits++;}
    char * string = (char*) malloc(nbits+1);

    for (int i=nbits-1; decimal>0; i--){
        if (decimal%2==0) string[i]='0';
        else string[i]='1';
        decimal/=2;
    }

    string[nbits]='\0';
    return string;
}