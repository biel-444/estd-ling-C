#include <stdio.h>

void imprime(int m [][4], int n){
    int i, j;
    for ( i = 0; i < n; i++){
        for ( j = 0; j < 4; j++){ 
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[]){
    int mat [3][4] = {{ 1, 2, 3, 4},{ 50, 60, 70, 80},{ 100, 200, 300, 400}};
    imprime(mat, 3);
}
