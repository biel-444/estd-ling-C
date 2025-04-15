#include <stdio.h>

float maior (float num1, float num2){
    if (num1 > num2)        
        return num1;
    else 
    return num2;
}

int main(int argc, char const *argv[])
{
    float x, y, m;
    printf("Insira um valor:\n");
    scanf("%f", &x);
    printf("Insira mais um valor:\n");
    scanf("%f", &y);
    m = maior(x, y); // usando a função 'maior' criada la em cima

    //mostrando o valor 
    printf("Maior: %.2f\n", m);

    return 0;
}
