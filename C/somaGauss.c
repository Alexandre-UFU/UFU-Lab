#include <stdio.h>

int main() {    
    int n1, sum;
    printf("Insert the int value: ");
    scanf ("%d", &n1);
    for (int i = 1; i<=n1; i++) {
        sum +=i;
    
     
    }
    printf("Results: %d", sum);
    return 0;
}