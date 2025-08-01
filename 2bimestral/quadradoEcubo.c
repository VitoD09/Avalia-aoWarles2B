#include <stdio.h>

int main(){
    int numero, quadrado, cubo;

    printf("Informe um valor: ");
    scanf("%d", &numero);

    printf("numero      |quadrado         |cubo \n");
    for(int i = 0; i <= 10; i++){
        quadrado = i * i;
        cubo = i * i * i;
        printf("%-10d  |   %-10d    |   %-10d\n", i , quadrado, cubo);
    }
    
}
