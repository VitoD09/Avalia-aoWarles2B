#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Informe um numero: \n");
    scanf("%d",&num1);
    printf("Informe um numero: \n");
    scanf("%d",&num2);
    
    if(num1 % num2 == 0){
        printf("O primeiro numero %d",num1);
        printf (" é um multiplo  do segundo numero %d",num2);
    }else{
        printf("O primeiro numero nao e um multiplo do segundo!");
    }
    return 0;
}
