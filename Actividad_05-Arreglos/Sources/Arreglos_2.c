#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i;

    printf("\nIngrese la cantidad de datos que requiere: ");
    scanf("%d", &N);

    float temp[N];

    printf("\n--- Ingrese las temperaturas ---\n");
    for (i = 0; i < N; i++) {
        printf("Ingrese la temperatura %d: ", i + 1);
        scanf("%f", &temp[i]);
    }

    printf("\nLas temperaturas son:\n");
    for (i = 0; i < N; i++) {
        printf("Temp %d: %.2f\n", i + 1, temp[i]);
    }

    return 0;
}
