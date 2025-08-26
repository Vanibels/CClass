#include <stdio.h>

int main(void){
    float number;
    float factor;
    printf("Entrez un nombre mystere different de 0 et positif ");
    scanf("%f", &number);
    printf("Entrez un facteur ");
    scanf("%f", &factor);
    if (number == 0){
        printf("Le nombre mystere %.3f est null", number);
        return 1;
    }
    else if (number != 0 && number > 0){
        printf("Le nombre mystere %.3f remplit les condition de test", number);
    }
    
    if (number > 0){
        printf("Le nombre mystere %.3f est positif", number);
    }else if (number > 0){
        printf("Le nombre mystere %.3f est negatif", number);
        return 1;
    }
    
    
    printf("Test du Nombre mystere : Egalite %d\n", factor == number);
    printf("Test du Nombre mystere : Nullite %d\n", factor != number);
    printf("Test du Nombre mystere : Plus petit %d\n", factor > number);
    printf("Test du Nombre mystere : Plus grand %d\n", factor < number);
    printf("Test du Nombre mystere : Plus petit ou egale %d\n", factor >= number);
    printf("Test du Nombre mystere : Plus grand ou egale %d\n", factor <= number);
    return 0;
}