#include <stdio.h> 

int main() {

    int x, y;
    float subtracao;

    printf("coloque o primeiro numero\n");
    scanf("%d", &x);

    printf("coloque o segundo numero\n");
    scanf("%d", &y);

    subtracao = (float) x - y;

    printf("resultado da multiplicacao %.2f", subtracao);
}