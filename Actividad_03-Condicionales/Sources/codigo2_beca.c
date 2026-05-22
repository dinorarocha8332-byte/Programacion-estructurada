#include <stdio.h>
#include <stdlib.h>

int main()
{
    float P;
    int M;

    printf("Ingresa tu promedio actual: \n");
    scanf("%f", &P);

    printf("Ingresa la cantidad de materias reprobadas: \n");
    scanf("%d", &M);

    if(P >= 85 && M == 0){
        printf("FELICIDADES obtuviste la beca\n");
    }
    else{
        printf("Lo sentimos pero no puedes obtener la beca\n");
    }

    return 0;
}
