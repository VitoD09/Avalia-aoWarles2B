#include <stdio.h>

int main() {
    int velocidade;

    printf("Com qual velocidade voce costuma dirigir (km/h)? ");
    scanf("%d", &velocidade);

    if (velocidade > 75) {
        printf("Voce esta bem acima do limite. Ira receber uma multa\n");
    } else {
        if (velocidade > 65) {
            printf("Voce esta acima do limite, dirija com mais cuidado.\n");
        } else {
            if (velocidade > 55) {
                printf("Velocidade um pouco acima do ideal, reduza um pouco.\n");
            } else {
                if (velocidade > 45) {
                    printf("Velocidade adequada, continue assim.\n");
                }else{
                    printf("Velocidade baixa, pode acelerar um pouco mais.");
                }
            }
        }
    }

    return 0;
}