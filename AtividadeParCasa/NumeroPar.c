#include <stdio.h>

int main() {
    int num;
    
    printf("Informe um numero inteiro: \n");
    scanf("%d",&num);
    
    if(num % 2 == 0){
        printf("Este numero e par!");
    }
    else{
        printf("Este numero e impar!");
    }
    return 0;
}
