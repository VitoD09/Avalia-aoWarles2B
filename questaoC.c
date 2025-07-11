#include <stdio.h>

int main(){
    //declaraçao
    int valor1, valor2;
    int adicao, subtracao, divisao, multiplicacao, resto;

    //entrada
    printf("Informe o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Informe o segundo valor: ");
    scanf("%d", &valor2);


    //processamento
    adicao = valor1 + valor2;
    subtracao = valor1 - valor2;
    multiplicacao = valor1 * valor2;
    divisao = valor1 / valor2;
    resto = valor1 % valor2;


  //saisda de dados
    printf("Adição: %d\n", adicao);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);
    printf("Resto da divisão: %d\n", resto);
    
    return 0;
}
