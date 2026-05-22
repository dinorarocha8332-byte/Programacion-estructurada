#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Variables iniciales (Imagen 1) */
    int A=7, B=8, C=18, D=7;

    /* Operadores Aritméticos */
    printf("*Operadores Aritméticos*\n");
    printf("Los valores de mis variables son: A=%d, B=%d, C=%d, D=%d\n", A, B, C, D);
    printf("El resultado de la operación A+B%%D es: %d\n\n", A + B % D);

    /* Operadores Relacionales */
    printf("*Operadores Relacionales*\n");
    printf("Los operadores relacionales son: >=, <=, ==, !=, >, <\n");
    printf("El resultado de la operación A==B es: %d\n", A == B);
    printf("El resultado de la operación A<=B es: %d\n", A <= B);
    printf("El resultado de la operación C*D es: %d\n\n", C * D);

    /* Operadores Lógicos */
    printf("*Operadores Lógicos*\n");
    printf("El resultado de la operación B==7 || C==B es: %d\n", B == 7 || C == B);
    printf("El resultado de la operación B==7 && C==B es: %d\n\n", B == 7 && C == B);

    /* Operador Ternario */
    printf("*Operador Ternario*\n");
    int resultado = (A > B) ? A : B;
    printf("El mayor entre A y B es: %d\n\n", resultado);

    /* Operadores de Incremento y Decremento */
    printf("*Operadores Incremento y Decremento*\n");
    printf("El resultado de la operación A++ es: %d\n", A++);   /* post-incremento */
    printf("El resultado de la operación A&D%%B es: %d\n\n", A & D % B);

    /* Segunda parte - Imagen 2 */
    A=2; B=5; C=21;
    int E, F;

    D = 30 < (C | (A += B)) ? 1 : 0;
    E = C | (A += B);
    F = (E || D);

    printf("El valor de F es: %d\n", F);
    printf("El valor de E es: %d\n", E);
    printf("El valor de E despues de un aumento es: %d\n", ++E);
    printf("El valor de E despues de un decremento es: %d\n", --E);
    printf("El valor de D es: %d", D++);
    printf("\nPorque no me gusta el cero el valor de D se le sumara uno\nEl valor de D es: %d\n", D);

    return 0;
}
