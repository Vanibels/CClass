#include <stdio.h>

int main(void){
    float temp;
    printf("Temperature en degre ? ");
    scanf("%f", &temp);
    printf("Convertie en %.3f degre fahrenheit", ((temp * 9)/5) + 32);

    return 0;
}