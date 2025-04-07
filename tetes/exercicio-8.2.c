#include <stdio.h>

int main(int argc, char const *argv[])
{
    int v[5];
    int i;
    int s = 0;

    for ( i = 0; i < 5; i++){
       printf("Insira os valores de cada vetor:\n");
       scanf("%d", &v[i]);
       s += v[i];
    }

    printf("Dados inseridos: \n");
    for ( i = 0; i < 5; i++){
            printf("%d \n", v[i]);
            
    }
    
    printf("Media dos valores:\n%d", s/5);
    
    
    return  0;
}
