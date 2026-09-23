#include <stdio.h>
#include <stdlib.h>

int main() {
    float limite;
    float temperatura;
    int consecutivas = 0;
    int resultado;

    printf("========================================\n");
    printf("   MONITORAMENTO DE TEMPERATURA\n");
    printf("========================================\n");

    /* Leitura e validacao do limite */
    do {
        printf("\nDigite o limite de temperatura: ");
        resultado = scanf("%f", &limite);

        if (resultado != 1) {
            printf("Entrada invalida! Digite um numero.\n");

            while (getchar() != '\n') {
                /* Limpa a entrada invalida */
            }
        }
    } while (resultado != 1);

    printf("\nMonitoramento iniciado.\n");
    printf("O programa sera encerrado apos 3 temperaturas\n");
    printf("consecutivas acima do limite de %.2f graus.\n\n", limite);

    /* Leitura das temperaturas */
    do {
        printf("Digite a temperatura: ");
        resultado = scanf("%f", &temperatura);

        if (resultado != 1) {
            printf("Entrada invalida! Digite um numero.\n");

            while (getchar() != '\n') {
                /* Limpa a entrada invalida */
            }

            continue;
        }

        if (temperatura > limite) {
            consecutivas++;

            printf("Temperatura acima do limite!\n");
            printf("Temperaturas consecutivas acima do limite: %d\n",
                   consecutivas);

            if (consecutivas == 3) {
                printf("\nALERTA: 3 temperaturas consecutivas acima do limite.\n");
                printf("Monitoramento encerrado automaticamente.\n");
            }
        } else {
            consecutivas = 0;
            printf("Temperatura dentro do limite.\n");
            printf("Contagem de consecutivas zerada.\n");
        }

        printf("\n");

    } while (consecutivas < 3);

    printf("========================================\n");
    printf("       FIM DO MONITORAMENTO\n");
    printf("========================================\n");

    return 0;
}
