//exercicio de idade com 'scanf'

//com uma variavel guarda o valor recebido e mostra ele no prompt

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade = 0;
    float peso = 0;

    printf("valor inicial da idade: %d.\n", idade);

    //guardando a variavel na memoria com scanf
    printf("Digite uma idade:\n");
    scanf("%d", &idade); // usar "&" antes da variavel para guardar na memoria 

    printf("Digite um peso: \n");
    scanf("%f", &peso);

    printf("Idade informada: %d.\n", idade);
    printf("Peso informado: %f.\n", peso);
    return 0;

    //sucesso!!!!!!!!!
}

