#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float baskaraPlus ( float  delta, float a, float b, float c);
float baskaraLess ( float  delta, float a, float b, float c);

int main (void){

    float delta=0, a=0, b=0, c=0, x1=0, x2=0, x=0;
    
    printf("insert the falue of ax^2 + bx = c ");
    scanf("%f %f %f", &a, &b, &c );
    delta = (b*b)-(4*a*c);
    if (a==0){
        printf("invalid value to ax^2");
    }
    if (delta==0){
        delta=pow(delta,(1/2));
        printf("n.raizes: 2 same root \n");
        printf("x=%f", baskaraPlus(delta,a,b,c));

    }
    if (delta<0){
        printf("the function don't have real root");
    }
    if (delta>=0){
        delta=pow(delta,(1.0/2.0));
        printf("n.raizes: 2 \n");
        x1 = baskaraPlus(delta,a,b,c);
        x2 = baskaraLess(delta,a,b,c);
        if (x1>x2){
            x = x1;
            x1 = x2; 
            x2 = x;
        }
        printf("x1=%f\n", x1 );
        printf("x2=%f", x2 );
    }
    return 0;
}

float baskaraPlus ( float delta, float a, float b, float c){
    float x1=0;
    x1=(((-1)*(b))+(delta))/(2*a);
    return x1;
}

float baskaraLess ( float  delta, float a, float b, float c){
    float x2=0;
    x2=(((-1)*(b))-(delta))/(2*a);
    return x2;
}
