#include <stdio.h>

//Funções aritiméticas

int main(int argc, char const *argv[])
{
    /*int A, B, som, sub, mul, div;

    printf("Digite o primeiro valor:\n ");
    scanf("%d", &A);
    printf("Digite o segundo valor:\n ");
    scanf("%d", &B);

    som = A + B;
    sub = A - B;
    mul = A * B;
    div = A / B;

    printf("Resulyados: \n");
    printf("Soma: %d.\n", som);
    printf("Subtracao: %d.\n", sub);
    printf("Multiplicacao: %d.\n", mul);
    printf("Divisao: %d.\n", div);*/
    
    //Atribuições aritiméticas

    int dado;

    printf("Digite o valor:\n");
    scanf("%d.\n", &dado);

    printf("Dado antes do incremento: %d\n", dado);

    dado++;
    printf("Depois do incremento: %d\n", dado);

    dado--;
    printf("depois do decremento: %d\n", dado);

    dado += 3;
    printf("depois do incremento de 3 unidades: %d.\n", dado);
    
    dado -= 2;
    printf("depois do decremento de 2 unidades: %d.\n", dado);
    
    dado *= 10;
    printf("depois de ser multiplicado por 10: %d.\n", dado);


    return 0;
}
