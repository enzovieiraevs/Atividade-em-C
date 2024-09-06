#include <stdio.h>

int main() {
   
    float nota1, nota2, nota3, media, nota_exame;
    
   
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
  
    media = (nota1 + nota2 + nota3) / 3;
    
    
    if (media >= 0.0 && media <= 2.99) {
        printf("Media: %.2f - Reprovado\n", media);
    } else if (media >= 3.00 && media <= 6.99) {
        printf("Media: %.2f - Exame\n", media);
        
        printf("Nota necessaria no exame para aprovacao: %.2f\n", nota_exame);
    } else if (media >= 7.00 && media <= 10.0) {
        printf("Media: %.2f - Aprovado\n", media);
    } else {
        printf("Nota invalida. Verifique as notas inseridas.\n");
    }
    
    return 0;
}

