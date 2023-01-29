#include <stdio.h>

int centimeters(int cm);

typedef
    struct cad{
        char firsName[20];
        char secondName[20];
    }
cad;

typedef
    struct data{
        int day, month, year;
    }
data;

typedef
    struct size{
        int meter, centiMeters;
    }
size;
    
const char strmes[13][4] = {
    "", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN",
    "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
};


int main(void){
    cad name;
    data data;
    size heith;
    int numberOfpeople;
    float wheight=0;
    printf("total of people: ");
    scanf("%d", &numberOfpeople);
    for(int i=0; i!=numberOfpeople; i++){
        printf("insert the name: ");
        scanf("%s %s", &name.firsName, &name.secondName);
        printf("insert the born day: ");
        scanf("%d/%d/%d", &data.day, &data.month, &data.year);
        printf("insert the height: ");
        scanf("%d.%d", &heith.meter, &heith.centiMeters);
        printf("Insert the wheith: ");
        scanf("%f", &wheight);
        heith.centiMeters= centimeters(heith.centiMeters);
        printf("\n name: %s %s \n born day:%2d/%s/%2d \n heith: %dm%dcm \n weith: %0.2f Kg \n \n", &name.firsName, &name.secondName, data.day, strmes[data.month], data.year, heith.meter, heith.centiMeters, wheight );

    }
    
    return 0;    
}

int centimeters(int cm){
    if (cm<10) return cm*10;
    if (cm>99) return centimeters(cm/10);
    return cm;
}