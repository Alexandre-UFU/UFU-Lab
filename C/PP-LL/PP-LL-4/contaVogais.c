#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 1024

long long int countVogals(char *str, int nchar);


int main(void){
    char script[N];
    printf("insert the sentence you want to find the total of vogals: ");
    fgets(script,N,stdin);
    printf("%d", countVogals(script, N));
    return 0;
}

long long int countVogals(char *str, int nchar) {
    int total=0;
    for (int i=0; i<nchar; i++) {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            total++;
        }
        if (str[i]==0){
            break;
        }
        else {
            continue;
        }
    }
    return total;
}