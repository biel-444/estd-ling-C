#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20 //define uma constante para ser usada como tamnanho das strings

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"Portuguese");

    char origem[N] = {"Olá, mundo!"}; //"{}" chaves são usadas para usar acentuação nas strings
    char destino[N];

    printf("Antes de strcpy:;\n");
    puts (origem);
    puts(destino);

    strcpy(destino, origem); // usado para atribiuir uma strring á outra string

    printf("Depois do strcpy:\n");
    puts(origem);
    puts(destino);

    return 0;
}
