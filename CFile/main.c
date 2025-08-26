#include <stdio.h>

int main(void){
    int date = 2025;
    int bornDate;
    printf("Enter your birth year: ");
    scanf("%d", &bornDate);
    int age = date - bornDate;
    printf("Vous etes nee en %d, vous avez %d", bornDate, age);
    return 0;
}