#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

#define N 1024

int countLettles(char * str);
int countNumber(char * str);
int countRest(char * str);
void getstr(char * str, int nchar);

int main(void) {    
    char s[N];
    int x=0, y=0, z=0;
    printf("Insert a mesage: \n ");
    getstr(s,N);
    printf("%s",s);
    x =countLettles(s);
    y =countNumber(s);
    z =countRest(s);
    printf("letras: %d digitos: %d outros: %d", x, y, z);
    return 0;
}

void getstr(char * str, int nchar) {
    char c;  int i;
    for(i = 0; i < nchar; i++) {
        c = getchar();
        if(c != '\n') {
            str[i] = c;
        } else {
            str[i] = '\0';
            break;
        }
    }
    if(i == nchar) {
        str[nchar-1] = '\0';
        // limpar buffer teclado
        while ((c = getchar()) != '\n' && c != EOF);
    } 
}

int countLettles(char * str) {
    int count=strlen(str);
    int letter=0;
    char c;
    for (int i=0;i<=count; i++){
        if ((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
            letter++;
        }

    }
    return letter;
}

int countNumber(char * str) {
    int count=strlen(str);
    int number=0;
    char c;
    for (int i=0;i<=count; i++){
        if ((str[i]>='0' && str[i]<='9')){
            number++;
        }

    }
    return number;
}

int countRest(char * str) {
    int count=strlen(str);
    int rest=-1;
    char c;
    for (int i=0;i<=count; i++){
        if ((str[i]>='0' && str[i]<='9'||str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
            continue;
        }
        else{rest++;}

    }
    return rest;
}