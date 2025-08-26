#include <stdio.h>

int main(void){
    int somme = 0;
    int nombre;
    printf("Entrez un nombre :");
    scanf("%d", &nombre);
    for (int i = 0; i <= nombre; i++) {
        somme += i;
        printf("i = %d , somme =  %d\n", i, somme);
    }
    printf("La somme de 1 a %d est : %d\n", nombre, somme);
}


/*
int main(void){
    for (int i = 0; i < 5; i++){
        printf("%d\n", i);
    }
    
    return 0;
}*/

/*
int main(void){
   int i = 0;
   int maxi;
   printf("Nombre ? ");
   scanf("%d",&maxi);
   if (maxi >= 90000){
    printf("Euhh mon pc naaa");
    return 1;
   }
   while(i <= maxi) {
    printf("Number (x%d)\n", i);
    i ++;
   }
}*/