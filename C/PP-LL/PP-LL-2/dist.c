#include <stdio.h>
#include <math.h>

int main (void){
    float xA, xB, yA, yB, S, R;
    printf("Insert the value relatives froam XA and YA: ");
    scanf("%f %f", &xA, &yA);
    printf("insert the values relatives froam XB and YB: ");
    scanf("%f %f", &xB, &yB);
    S = ((pow(xA-xB,2))+ (pow(yA-yB,2)));
    if (S>0){
        R = sqrt(S);
        printf("the result is %.2f", R );
    }
    else{
        printf("invalid value");
    }
    return 0;
}