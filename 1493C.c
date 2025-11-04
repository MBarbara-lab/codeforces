#include <stdio.h>
#include <string.h>

#define MAX_STR 100
#define ALFABETO_TAM 26

int isKBeautiful (char str[], int k) {
    int alfabetoCont [ALFABETO_TAM] = {0};
    int letterPosition = -1;
    
    for (int i = 0; str[i]; i++) {
        letterPosition = str[i] - 'a';
        alfabetoCont[letterPosition]++;
    }
    
    for (int i = 0; i < ALFABETO_TAM; i++) {
        if ((alfabetoCont[i] % k) != 0) return 0;
    }
    
    return 1;
}

int isGreater (char str[], int k) { // temq mudar esse nume
    char tempStr;
    int lastLetterP;
    char lastLetter;
    
    strcpy(tempStr, str);
    
    lastLetterP = strlen(tempStr) - 1;
    //e se for z?
    tempStr[lastLetterP]++; // a ultima letra, char * lastLetter;
    
    for (int i = 0; )
    if (strchr(tempStr, tempStr[lastLetterP])) { // comparação só comeca aq
        if (isKBeautiful(tempStr, k)) {
            if(strcmp(tempStr, strInput) > 0) {
                printf("%s", tempStr);
            } else continue;
        }
    }
}

int main()
{
    char strInput [MAX_STR];
    fgets(strInput, MAX_STR, stdin);
    
    return 0;
}