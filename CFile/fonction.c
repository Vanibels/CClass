#include <stdio.h>

int addition(int a, int b){
    return a + b;
}
int main(void){
    int c = addition(10,20);
    printf("%d", c);
    return 0;
}
