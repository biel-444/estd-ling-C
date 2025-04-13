#include <stdio.h>
#include <string.h>
#include <locale.h>
#define tam 50

struct tipo_pessoa{
   int idade;
   float altura;  //não tinha essa parte no struct de exemplo
   float peso;
   char nome[tam];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL, "portuguese");

    //Criando e inicializando
    tipo_pessoa pess ={0, 0.0, 0.0,""};

    printf("Inicio:\n");
    printf("pessoa.idade:%d\n", pess.idade); 
    printf("pessoa.altura:%.2f\n", pess.altura); 
    printf("pessoa.peso:%.2f\n", pess.peso);
    printf("pessoa.nome:%s\n", pess.nome);

    //Atribuindo valores aos campos
    pess.idade = 21 ;
    pess.altura = 1.75;
    pess.peso =75.00 ;
    strcpy(pess.nome, "Texto");
   
    printf("\nAlterando os campos via codigo\n");
    printf("pessoa.idade:%d\n", pess.idade); 
    printf("pessoa.altura:%.2f\n", pess.altura); 
    printf("pessoa.peso:%.2f\n", pess.peso);
    printf("pessoa.nome:%s\n", pess.nome);

    //Solicitando inserções via teclado

    printf("\nInsira sua idade:\n");
    scanf("%d", &pess.idade);
    printf("Insira sua altura:\n");
    scanf("%f", &pess.altura);
    printf("Insira seu peso:\n");
    scanf("%f", &pess.peso);
    fflush(stdin);
    printf("Insira seu primeiro nome:\n");
    scanf("%s", &pess.nome);

    printf("\nAlterando os campos via interacao com o usuarrio\n");
    printf("pessoa.idade:%d\n", pess.idade); 
    printf("pessoa.altura:%.2f\n", pess.altura); 
    printf("pessoa.peso:%.2f\n", pess.peso);
    printf("pessoa.nome:%s\n", pess.nome);
    return 0;
}



