#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"Portuguese");
    
    char HardText[N] = {"/exit"};
    char Senha_user[N];
    int ok;

    printf("Digite sua senha:\n");
    gets(Senha_user);

    ok = strcmp(HardText, Senha_user);

    if (ok == 0)
    {
        printf("Senha correta!");
    }else{
        printf("Senha incorreta!");
    }
    
    return 0;
}
