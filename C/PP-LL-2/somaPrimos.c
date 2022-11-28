#include <stdio.h>
#include <stdbool.h>

bool ehPrime (int n);

int main (void) {
    int acumulate, min, max;
    printf("Inserte the senquece  ");
    scanf("%d %d", &min, &max);
    for (int j = min; j<=max; j++){
        if (ehPrime(j)==true){
            acumulate += j;
        }    
    }
    printf("the number %d prime!",acumulate);
}
bool ehPrime (int j){
    if(j==0){
        return false;
    }
    if(j==1){
        return false;
    }
    if(j==2){
        return true;
    }
    if(j%2 == 0){
        return false;
    }
    for (int i=2; i<j; i++){
        if(j%i==0){
            return false;
        }
    }
    return true;
}