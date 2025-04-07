#include <stdio.h>

int main(int argc, char const *argv[])
{
    char s [10];

    printf("Digite algo (scanf convencional):\n");
    scanf("%s", s); //esse scanf não recebe nada após o espaço
    fflush(stdin);

    printf("Rsultado: %s \n\n", s);

    printf("Digite algo (scanf aprimorado):\n");
    scanf("%9[^\ns]", s);// %<tam>[^\ns]<para não contar os espços como string>
    fflush(stdin);// serve para dar um "clear" no lixo do q sobrar do scanf anterior

    printf("Rsultado: %s \n\n", s);
    
    return 0;
}
