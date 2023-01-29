#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define N 1024

long long int decimalConvert(char *str);
char invertString(char *str);

int main(void){
    char str[N], bin[N];
    printf("insert the binary sequence you want to convert to decimal: ");
    fgets(str,N,stdin);

    printf("Decimal Number: %d", decimalConvert(str));
    return 0;
}

long long int decimalConvert(char *str){
    invertString(str);
    int  n=0, countElements=strlen(str);
    long long int dec;
    for (int i=0; i<=countElements; i++){
        if (str[0]=='1'){
            dec = 1;
        }
        if (str[i]=='0'){
            n++;
        }
        if (str[i]=='1'){
            dec +=(pow(2,n));
            n++;
        }
        if (str[i]=='a'){
            continue;
        }
        if (str[i]==' '){
            continue;
        }
        
    }
    return dec;


}

char invertString(char *str) {
    int pass, end, size, countElements=strlen(str);
    end = countElements-1;
    for(int i=0; i<countElements/2;i++){
        pass = str[i];
        str[i]=str[end];
        str[end]=pass;
        end--;
    }

}
