#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"Portuguese");
    char s[N];
    int i;

    printf("Digite um texto:\n");
    gets(s);
    i = strlen(s);// conta quantos caracteres
    printf("\nTamanho do texto: %d\n\n", i);

    printf("Impressao de posicao a posicao:\n");// esta imprimindo posição por posição do caractere
    for ( i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }


    /*
    puts(s); funcionaria igualmente
    */
}
