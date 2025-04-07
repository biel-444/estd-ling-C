#include <stdio.h>

int main(int argc, char const *argv[])
{
    float m;

    printf("Insira a nota: \n");
    scanf("%f", &m);

    if (m >= 4.0 && m < 7.0)
    {
        printf("tem direiro ao exame!\n");
    }else{
        printf("voce foi aprovado!");
    }

    return 0;
}
