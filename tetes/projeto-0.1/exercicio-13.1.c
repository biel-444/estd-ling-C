// criando um codigo fonte, para ser chamado com o "#include"

#include "exercicio-13.1.h"


float calcPerimetroTriangulo(float a,float b, float c){
    return a + b + c;
}

float calcPerimetroRetangulo(float b,float a){
    return 2*b + 2*a;
}

float calcPerimetrocirculo(float r){
    return 2 * PI * r;
}

float calcAreaTriangulo(float b,float a){
    return (b * a)/2 ;
}

float calcAreaRetangulo(float b,float a){
    return b*a;
}

float calcAreaCirculo(float r){
    return PI*r*r ;
}