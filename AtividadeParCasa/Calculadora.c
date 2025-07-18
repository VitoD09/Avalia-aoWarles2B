#include <stdio.h>

int main(){
    int num1, num2;
    int soma, sub, div, mult, resto;

    printf("Informe um numero: ");
    scanf("%d",&num1);

    printf("Informe um numero: ");
    scanf("%d",&num2);

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    resto = num1 % num2;

    printf("Resultado soma: %d \n",soma);
    printf("Resultado subtração: %d \n", sub);
    printf("Resultado multiplicação: %d \n", mult);
    printf("Resultado divisao: %d \n", div);
    printf("resultado do resto da divisao: %d \n", resto);

}
