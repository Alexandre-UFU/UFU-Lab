#include<stdio.h>
#include<stdbool.h>

int hailstoneSequence(int n){
    int sum;
    sum = n;
    while (n>1){
        
        if(n>1){
            if (n%2==0){
                n=n/2;
                sum+=n;
            }
            else{
                n=3*n+1;
                sum+=n;
            }

        }
        else{
            break;
        }
    }
    return sum;
}

int main(void){
    int hailstone, n;
    printf("Insert the value how want to find the sum of the results froam the sum of hailstone: ");
    scanf("%d", &n);
    hailstone = hailstoneSequence(n);
    printf("The value of the sum is %d", hailstone);
    return 0;


}