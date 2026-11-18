#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, num3, num4, media;
    char nome[5];

    printf("Digite o nome do aluno: ");
    scanf(" %s", nome);
    printf("Digite a primeira nota: ");
    scanf(" %f", &num1);
    printf("Digite a segunda nota: ");
    scanf(" %f", &num2);
    printf("Digite a terceira nota: ");
    scanf(" %f", &num3);
    printf("Digite a quarta nota: ");
    scanf(" %f", &num4);

    media = (num1 + num2 + num3 + num4) / 4;
    printf("A média do ano do aluno %s foi: %.2f\n", nome, media);
    
    return 0;
}