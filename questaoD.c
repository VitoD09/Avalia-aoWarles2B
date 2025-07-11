#include <stdio.h>
int main() {
    //declaraçao de variaveis
    float celsius, fahren;

    //entrada de dados
    printf("Informe o valor da temperatura em celsius: ");
    scanf("%2f", &celsius);

    //processamwnto
    fahren = (9*celsius+160)/5;

    //saida de dados 
    printf("A temperatura em fahrenheit e %2f ",fahren);
    return 0;
  }
