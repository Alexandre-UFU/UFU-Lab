#include <stdio.h>

int MDC (int x, int y );
int superiorSum (int x, int y, int a, int b, int mmc );
int superiorSub (int x, int y, int a, int b, int mmc );
int MMC (int y, int b);

int main(void){
    int x=0,y=0,a=0,b=0, mdc1=0, mdc2=0; 
    int mmc=0;
    int sumS=0, sumI=0, sumMDC=0;
    int subS=0, subI=0, subMDC=0;
    int mulS=0, mulI=0, mulMDC=0;
    int divS=0, divI=0, divMDC=0;
    printf("Insert the number racional: ");
    scanf("%d %d", &x, &y);
    printf("Insert the number racional: ");
    scanf("%d %d", &a, &b);


    //"x/y-MDC"
    mdc1 = MDC(x,y);
    x=(x/mdc1);
    y=(y/mdc1);

    //"a/b-MDC"
    mdc2 = MDC(a,b);
    a=(a/mdc2);
    b=(b/mdc2);

    if (y<0){
        y=(y*(-1));
        x=(x*(-1));
    }
    if (b<0){
        b=(b*(-1));
        a=(a*(-1));
    }

    //"Y,B-MMC"
    mmc = MMC(y,b);

    //"Soma x/y+a/b iredutivel"
    sumS= superiorSum(x,y,a,b,mmc);
    sumMDC= MDC(sumS,mmc);
    sumS= (sumS/sumMDC);
    sumI= (mmc/sumMDC);

    if (sumI<0){
        sumI=(sumI*(-1));
        sumS=(sumS*(-1));
    }

    //"Subtração x/y-a/b iredutivel"
    subS=superiorSub(x,y,a,b,mmc);
    subMDC= MDC(subS,mmc);
    subS= (subS/subMDC);
    subI= (mmc/subMDC);

    if (subI<0){
        subI=(subI*(-1));
        subS=(subS*(-1));
    }

    //"multiplicação (x/y)*(a/b) iredutivel"
    mulS = (x*a);
    mulI = (y*b);
    mulMDC = MDC(mulS,mulI);
    mulI= mulI/mulMDC;
    mulS = mulS/mulMDC;

    if (mulI<0){
        mulI=(mulI*(-1));
        mulS=(mulS*(-1));
    }

    //"division (x/y/(a/b) iredutivel"
    divS = (x*b);
    divI = (y*a);
    divMDC = MDC(divS,divI);
    divS = divS/divMDC;
    divI= divI/divMDC;

    if (divI<0){
        divI=(divI*(-1));
        divS=(divS*(-1));
    }

    printf("the ireductible fraction 1 is %d/%d\n", x,y );
    printf("the ireductible fraction 2 is %d/%d\n", a,b );
    printf("the ireductible sum os fractions 1+2 is %d/%d\n", sumS, sumI );
    printf("the ireductible sub fractions 1-2 is %d/%d\n", subS, subI );
    printf("the ireductible multiplie fractions 1*2 is %d/%d\n", mulS, mulI  );
    printf("the ireductible division fractions 1/2 is %d/%d\n", divS, divI );
    return 0;
}

int MDC (int x, int y ){
    if (y == 0){
        return x;
    }else{
        return (MDC(y, x % y));
    }
}


int superiorSum (int x, int y, int a, int b, int mmc ){
    int sup1=0, sup2=0, sup=0, div1=0, div2=0;
    div1 = (mmc/y);
    div2= (mmc/b);
    sup1 = x*div1;
    sup2 = a*div2;
    sup = sup1 + sup2;
    return sup;

}

int superiorSub (int x, int y, int a, int b, int mmc ){
    int sup1=0, sup2=0, sup=0, div1=0, div2=0;
    div1 = (mmc/y);
    div2=(mmc/b);
    sup1 = x*div1;
    sup2 = a*div2;
    sup = sup1 - sup2;
    return sup;

}

int MMC(int y , int b) {

    int n1=y, n2=b, max;
    // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;
    while (1) {
        if ((max % n1 == 0) && (max % n2 == 0)) {
            return max;
            break;
        }
        ++max;
    }
}

//4 hrs pra resolver um problema;