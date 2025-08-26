#include <stdio.h>

int main(void){
    int years;
    printf("Donne une annee : ");
    scanf("%d",&years);
    if (years < 0 || years > 100000){
        printf("%d Est trop haut ou trop bas ( 0 ~~ 100000) \n", years);
        return 1;
    }
    
    if ((years % 4 == 0 && years % 100 != 0) || (years % 400 == 0)){
        printf("%d Est une annee bixestille \n", years);
        return 0;
    }else{
        printf("%d N'Est pas une annee bixestille \n", years);
        return 1;
    }
    return 0;
}