#include <stdio.h>

int main(void){
    float x, y;
    int op;
    do{
        printf("Escolha a operação:\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        scanf("%d", &op);
        printf("Digite o primeiro numero: ");
        scanf("%f", &x);
        printf("Digite o segundo numero: ");
        scanf("%f", &y);

        switch(op){
            case 1:
                printf("Resultado: %.2f\n", x + y);
                break;
            case 2:
                printf("Resultado: %.2f\n", x - y);
                break;
            case 3:
                printf("Resultado: %.2f\n", x * y);
                break;
            case 4:
                if(y != 0){
                    printf("Resultado: %.2f\n", x / y);
                } else {
                    printf("Erro: Divisão por zero!\n");
                }
                break;
            default:
                printf("Operação inválida!\n");
        }
    } while(op >= 1 && op <= 4);
    return 0;
    

}