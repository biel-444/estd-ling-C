#include <stdio.h>

int main(int argc, char const *argv[])
{
    char s [10];

    printf("Digite algo (leitura pelo gets):\n");
    gets(s);//não controla limites de tamanho da string
    fflush(stdin);//"sdtin" é a entrada de dado padrão pelo teclado
    puts("Resultado:");
    puts(s);
    puts("");

    printf("Digite algo (leitura pelo 'fgets'):\n");
    fgets(s, 10, stdin);// preferencial por limitar o tamanhos das strings
    fflush(stdin);

    puts("Resultado:");
    puts(s);


    // OBS: "puts" é como um "print". (adiciona uma qubra de linha após o comando)
    return 0;
}
