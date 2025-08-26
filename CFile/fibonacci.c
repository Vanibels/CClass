#include <stdio.h>

int main(void){
    int n;
    long terme1 = 0;
    long terme2 = 1;
    long terme3;
    printf("Combien de nombre de la suite de fibonachi ? ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("%d,",terme1);
        terme3 = terme1 + terme2;
        terme2 = terme1;
        terme1 = terme3;
    }
}