#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<conio.h>

#define N 1024

char* getRawStr(char* sequence);
char* invertString(char* sequence);
char* substring(char* sequence, int init, int end);
void upper(char * str);
void getstr(char * str, int nchar);

int main(){
    int n=1;
    printf("insert a word/sentence, whidout accenture: ");
    char scan[N];
    getstr(scan,N);
    int x= strlen(scan);
    for(int i; i<x-1; i++){
        if(scan[i] >= 192 && scan[i] <= 252){
            printf("invalid sentence");
            n=0;
        }
        else{
            continue;
        }
    }

    if (n=1){
        upper(scan);
        printf("%s \n",scan);
        char* raw = getRawStr(scan);
        int len = strlen(raw);
        int isOdd = len % 2 != 0;
        char* firstExpression = substring(raw, 0, len / 2);
        char* secondExpression = invertString(substring(raw, isOdd ? (len / 2) + 1 : len / 2, len));
        if (strcmp(firstExpression, secondExpression) == 0) printf("Is palindrome");
        else printf("isn't a palindrome");
    }
    printf("\n ok f \n");
    return 0;
}

char* getRawStr(char* sequence)
{
    int len = strlen(sequence);
    char* newStr = malloc(sizeof(char) * N);
    int emptySpaces = 0;
    for (int i = 0; i < len; i++)
    {
        if (sequence[i] != ' ') newStr[i - emptySpaces] = sequence[i];
        else emptySpaces++;

    }
    printf("ok\n");
    return newStr;
}
char* substring(char* sequence, int init, int end)
{
    char* newString = malloc(sizeof(char) * N);
    int len = strlen(sequence);
    for (int i = init; i < end; i++)
    {
        if (i > len) break;
        newString[i - init] = sequence[i];
    }
    printf("ok\n");
    return newString;
}

char* invertString(char* sequence)
{
    char* invertedStr = malloc(sizeof(char) * N);
    int len = strlen(sequence) - 1;
    int index = 0;
    for (int i = len; i >= 0; i--) invertedStr[index++] = sequence[i];
    printf("ok\n");
    return invertedStr;
}

void upper(char * str) {
    long long int l = 0;
    int len =strlen(str);
    while(str[l]) {
        if(str[l] >= 'a' && str[l] <= 'z'|| str[l] >= 'A' && str[l] <= 'Z'){
            str[l] -= 'a' - 'A';
        }
        else if(str[l] >= ' ' && str[l] <= '@'||str[l] >= '[' && str[l] <= '`'||str[l] >= '{' && str[l] <= '~'||str[l] >= 128 && str[l] <= 191){
            for(int j=l; j<len; j++){
                str[j] = str[j+1];
            }
            len--;
            l--;
        }
        else if(str[l] >= 192 && str[l] <= 220){
            str[l] -= 192 - 'A';
        }
        else if(str[l] >= 224 && str[l] <= 252){
            str[l] -= 224 - 'A';
        }
        l++;
    }
    printf("ok\n");
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
    printf("ok\n");
}