#include <stdio.h>
#include <math.h>

#ifdef M_PI
  #undef M_PI
#endif
#define M_PI 3.141592653589793115997963468544185161590576171875

int main() {    
    int n1, n, summation;
    int  product;
    float  taylor, x, f;
    printf("Insert the int value: ");
    scanf ("%d", &n1);
    printf("Insert the float value x: ");
    scanf("%f", &x);
    if(n1>0){
        for (int i = 0; i<=n1; i++){
            n = 2*i;
            for (int j = 0; j<=n; j++) {
                int sum;
                if(product == 0){
                    product = 1;
                } 
                else {
                    sum = product * j;
                    product = sum;
                }
            }
            f = pow(x*M_PI, i*2);
            summation = pow(-1,i);
            taylor += summation*(f / product);

        }
    
    }    
    printf("Result ≈ %.5f", taylor);    
    return 0;
}