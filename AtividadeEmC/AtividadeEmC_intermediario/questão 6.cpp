#include <stdio.h>

int main() {
    float lado1, lado2, lado3;


    printf("Digite o comprimento do primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o comprimento do segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o comprimento do terceiro lado: ");
    scanf("%f", &lado3);

    
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        printf("Os lados formam um triangulo valido.\n");

        
        if (lado1 == lado2 && lado2 == lado3) {
            printf("O triangulo e equilatero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("O triangulo e isosceles.\n");
        } else {
            printf("O triangulo e escaleno.\n");
        }
    } else {
        printf("Os lados nao formam um triangulo valido.\n");
    }

    return 0;
}
