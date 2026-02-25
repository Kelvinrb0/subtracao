#include <stdio.h> 

int main() {

    int x, y, z, w;
    float subtracao;

    printf("coloque o primeiro numero\n");
    scanf("%d", &x);

    printf("coloque o segundo numero\n");
    scanf("%d", &y);
    
    printf("coloque o terceiro numero\n");
    scanf("%d", &z);
    
    printf("coloque o quarto numero\n");
    scanf("%d", &w);

    subtracao = (float) x - y - z - w;

    printf("resultado da multiplicacao %.2f", subtracao);
}