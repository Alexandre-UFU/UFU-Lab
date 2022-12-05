#include <stdio.h>

int main() {    
    int n1, sum;
    printf("Insert the int value: ");
    scanf ("%d", &n1);
    if(n1>0){
        for (int i = 0; i<=n1; i++) {
            int product;
            if(product == 0){
                product = 1;
            } 
            else {
                sum = product * i;
                product = sum;
                }
        }    
        printf("Results: %d! = %d", n1, sum);
    }
    else {
        printf("Invalid value");
    }
    
    return 0;
}
