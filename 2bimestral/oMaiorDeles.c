#include <stdio.h>

int main() {
    int n, num, maior, contador = 0;

    printf("Quantos números deseja digitar? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade inválida.\n");
        return 1;
    }

    printf("Digite os números:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);

        if (i == 0) {
            maior = num;
            contador = 1;
        } else if (num > maior) {
            maior = num;
            contador = 1;
        } else if (num == maior) {
            contador++;
        }
    }

    printf("O maior número é: %d\n", maior);
    printf("Ele foi lido %d vezes.\n", contador);

    return 0;
}