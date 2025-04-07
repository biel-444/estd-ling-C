#include <stdio.h>

//basico de comando IF/ELSE em C

int main(int argc, char const *argv[])
{
    float m ; 
    
    // m = média, a idéia é q seja digitado a nota e se sua nota esta dentro da média para ser aprovado ou reprovado

    printf("Digite sua nota: \n");
    scanf("%f", &m);

    if (m >= 7)
    {
        printf("Voce foi aprovado(a)");
    }

    else{
        printf("Voce foi reprovado(a)");
    }
    
    return 0;
}
