#include <stdio.h>
#include <stdlib.h>

void display (int var, int *ptr);
void update (int *p);

int main(int argc, char const *argv[])
{
    int var = 15;
    int *ptr ;

    ptr = &var;

    display (var,ptr);

    update (&var);

    display (var,ptr);

    //endereço de memória das funções:
    printf("\n\nendereco da funcao display = %p\n", display);
    printf("endereco da funcao update = %p\n", update);

    printf("\n\nEnd.");
    return 0;
}

void display (int var, int *ptr){
    printf("\n\n");
    printf("conteudo de var = %d\n", var);
    printf("endereco de var= %p\n", &var);
    printf("conteudo apontado = %d\n", *ptr);
    printf("endereco apontado = %p\n", ptr);
    printf("endereco do ptr   = %p\n", &ptr);
}


void update (int *p){
    *p = *p+1;
}
