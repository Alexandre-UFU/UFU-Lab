#include <stdio.h>

int main(){
    int dividers, n1, i, product;
    printf("Insert the int value: ");
    scanf ("%d", &n1);
    if(n1>0){
        for (int i = 1; i<=n1; i++) {
            product = n1%i;
            if(product == 0){
                dividers += i;
            } 
            }

        printf("Results: %d",dividers);
    }
    else{
        printf("Invalid value");
    }
    return 0;
}