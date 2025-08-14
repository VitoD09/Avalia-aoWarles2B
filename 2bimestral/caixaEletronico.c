#include <stdio.h>

int main() {
    short idade;
    long montante;
    int conta;
    
    printf(" Depósito Bancário \n");
    printf("Digite sua idade: ");
    if (scanf("%hd", &idade) != 1 || idade < 18) {
        printf("Voce nao pode fazer um deposito\n");
        return 1;
    }
    printf("Digite o número da conta: ");
    if (scanf("%d", &conta) != 1 || conta <= 0) {
        printf("Conta nao encontrada\n");
        return 1;
    }
    printf("Digite o montante a depositar: ");
    if (scanf("%ld", &montante) != 1 || montante <= 0) {
        printf("montante nao disponivel\n");
        return 1;
    }
    printf("Idade: %hd anos\n", idade);
    printf("Conta: %d\n", conta);
    printf("Montante depositado: R$ %ld\n", montante);

    printf("\nDepósito realizado com sucesso!\n");

    return 0;
}
