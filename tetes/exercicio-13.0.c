#include <stdio.h>
// entendendo como funciona 'argc' e '*argv'

int main(int argc, char const *argv[])
{
    int i;

    if (argc > 1)
    {
        printf("Foram inseridos %d argumentos:\n");
        for ( i = 0; i < argc; i++){
            printf("%s\n", argv[i]);
        }
    }else{
        printf("Nao foram inseridos argumentos no programa.\n");
    }
    
}
