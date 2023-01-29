#include <stdio.h>
#include <stdlib.h>

char * startString ();
int countWords(char * vec);

int main (void){
    char * sentence;
    int numberWords=0;
    printf("Set the sentence you wanto to count the words: ");
    sentence = startString();
    printf("%s\n", sentence);
    numberWords=countWords(sentence);
    printf("%d", numberWords);
    free(sentence);
    return 0;
}

char * startString (){
    char str;
    char *string =(char*) malloc(1);
    int count=0;
    while(1){
        str = getchar();
        if (str!= '\n'){
            string=(char *) realloc(string, (count+1) * sizeof(char));
            string[count]= str;
            count +=1;
        }
        else{
            string=(char*) realloc(string, (count+1) * sizeof(char));
            string[count]= '\0';
            count+=1;
            break;
        }
    }
    return string;
}

int countWords(char * vec){
    int words=0, oneLettlerword=0, i=0;
    while(*(vec+i)!='\0'){
        if ( ( (*(vec + i) <= 122 && *(vec + i) >= 97 ) || ( *(vec + i) <= 90 && *(vec + i) >= 65 ) || (*(vec + i) <= 57 && *(vec + i) >= 48) ) ){
            oneLettlerword=1;
        }
        else if((oneLettlerword == 1 && (*(vec + i) == '-'))){
            oneLettlerword = 1;

        }
        else{
            if(oneLettlerword==1){
                words+=1;
                oneLettlerword=0;
            }
        }
        i++;
    }
    if(oneLettlerword){
        words++;
        oneLettlerword=0;
    }
    return words;
}