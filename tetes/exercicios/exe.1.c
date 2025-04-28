#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n1, n2;

    printf("digite o primeiro numero:\n");
    scanf("%d", &n1);
    printf("digite o segundo numero:\n");
    scanf("%d", &n2);

    if (n1 > n2 ){
        printf("O numero %d e maior", n1);
    }
    if (n2 > n1){
        printf("O numero %d e maior", n2);
    }
    if (n1 == n2){
        printf("Os numeros: %d e %d sao iguais\n", n1, n2);
    }

    system("pause");
    
    return 0;
}
