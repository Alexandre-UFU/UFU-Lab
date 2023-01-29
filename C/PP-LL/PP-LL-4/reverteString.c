#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 1024

void invertString(char *str);
void upper(char * str);

int main(void){
    char script[N];
    printf("insert the sentence you want to invert: ");
    fgets(script,N,stdin);
    upper(script);
    invertString(script);
    printf("%s", script);
    return 0;
}

void invertString(char *str) {
    int pass, end, size, countElements=strlen(str);
    end = countElements-1;
    for(int i=0; i<countElements/2;i++){
        pass = str[i];
        str[i]=str[end];
        str[end]=pass;
        end--;
    }
}

void upper(char * str) {
    long long int l = 0;
    while(str[l]) {
        if(str[l] >= 'a' && str[l] <= 'z')
            str[l] -= 'a' - 'A';
        l++;
    }
}