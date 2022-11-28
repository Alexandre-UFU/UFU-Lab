#include <stdio.h>

int main (void){
    float xA, yA, xB, yB, xC, yC, aC, cB, area ;
    printf("Insert the coordinates to the point A: ");
    scanf("%f %f", &xA, &yA);
    printf("Insert the coordinates to the point B: ");
    scanf("%f %f", &xB, &yB);
    xC = xB;
    yC = yA;
    printf("The coordinates froam the point C is: %.2f %.2f", xC, yC);
    aC = xA - xB;
    cB = yB - yA;
    if (aC<0){
        aC = aC*(-1);
    }
    if (cB<0){
        cB = cB*(-1);
    }
    area = (aC*cB)/2;
    printf("The area is: %.2f", area);
    return 0;
}
