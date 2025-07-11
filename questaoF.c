#include <stdio.h>
int main() {
    //declaraçao de variaveis
    float raio,altura,volume;

    //entrada de dados
    printf("Informe o valor do raio: ");
    scanf("%2f", &raio);
    printf("Informe o valor da altura: ");
    scanf("%2f", &altura);

    //processesamento
    volume = 3.14 * raio * altura;

    //saida de dados
    printf("O volume interno da lata e %2f",volume);
  }
