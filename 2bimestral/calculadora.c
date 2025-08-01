#include <stdio.h>



int main(){
    int operacao, valor1, valor2;
    printf("    Operaçoes   \n");
    printf("1- adiçao\n");
    printf("2- subtraçao\n");
    printf("3- multiplicaçao\n");
    printf("4- divisão\n");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 1:
    int adicao;
        printf("Informe um valor: ");
        scanf("%d",&valor1);
        printf("Informe um valor: ");
        scanf("%d",&valor2);

        adicao = valor1 + valor2;
        printf("Resultado = %d", adicao);
        break;
    case 2:
    int subtracao;
        printf("Informe um valor: ");
        scanf("%d",&valor1);
        printf("Informe um valor: ");
        scanf("%d",&valor2);

        subtracao = (valor1) - (valor2);
        printf("Resultado = %d", subtracao);
        break;

    case 3:
    int multiplicacao;
        printf("Informe um valor: ");
        scanf("%d",&valor1);
        printf("Informe um valor: ");
        scanf("%d",&valor2);

        multiplicacao = valor1 * valor2;
        printf("Resultado = %d \n", multiplicacao);
        break;
    
    case 4:
    int divisao;
        printf("Informe um valor: ");
        scanf("%d",&valor1);
        printf("Informe um valor: ");
        scanf("%d",&valor2);

        divisao = valor1 / valor2;
        //resto = valor1 % valor2;
        printf("Resultado = %2f \n", divisao);
        break;
    default:
        printf("O valor inserido nao corresponde a uma operaçao por favor informe um valor possivel");
        break;
    }
}
