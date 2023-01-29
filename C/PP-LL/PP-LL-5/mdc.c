#include <stdio.h>

int MDC (int x, int y );

int main(void){
    int x,y;
    printf("Insert the number the user want's the max divisor comum:");
    scanf("%d %d", &x, &y);
    printf("the max divisor comum is %d", MDC(x,y));
    return 0;
}

int MDC (int x, int y ){
    if (y == 0){
        return x;
    }else{
        return (MDC(y, x % y));
    }
}
