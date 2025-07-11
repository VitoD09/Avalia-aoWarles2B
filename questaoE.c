#include <stdio.h>
int main() {
    //declaraçao de variaveis
    float celsius, fahren;

    //entrada de dados
    printf("Informe a temperatura em fahrenheit: ");
    scanf("%2f", &fahren);

    //processamneto
    celsius = ((fahren - 32)*5)/9;

    //saida de dados
    printf("A temperatura em celsius e %2f", celsius);
  }
