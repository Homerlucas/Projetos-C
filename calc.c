#include <stdio.h>

int main()
{
    float num1, num2;
    int op, system();
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite a operacao desejada (1 - soma, 2 - subtracao, 3 - multiplicacao, 4 - divisao): ");
    scanf("%d", &op);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    switch (op)
    {
        case 1:
            printf("Resultado: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Resultado: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Resultado: %.2f\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0)
                printf("Resultado: %.2f\n", num1 / num2);
            else
                printf("Erro: Divisao por zero!\n");
            break;
        default:
            printf("Operacao invalida!\n");
    }
    system("pause");
    return 0;


}