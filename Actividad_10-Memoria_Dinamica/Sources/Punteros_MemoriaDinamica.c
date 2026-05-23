#include <stdio.h>
#include <stdlib.h>

/* ============ FUNCIONES DE PUNTEROS ============ */

void cambiar(int *x) {
    *x = 100;
}

void demo_punteros() {
    printf("\n=== PUNTEROS BASICOS ===\n");
    int x = 5;
    int *p;
    p = &x;
    printf("x = %d\n", x);
    printf("p (direccion) = %p\n", (void*)p);
    printf("*p (valor)    = %d\n", *p);
    *p = 20;
    printf("despues de *p = 20, x = %d\n", x);
}

void demo_paso_referencia() {
    printf("\n=== PASO POR REFERENCIA ===\n");
    int a = 5;
    printf("antes de cambiar: a = %d\n", a);
    cambiar(&a);
    printf("despues de cambiar(&a): a = %d\n", a);
}

void demo_arreglos_punteros() {
    printf("\n=== ARREGLOS Y PUNTEROS ===\n");
    int v[5] = {10, 20, 30, 40, 50};
    printf("v[2]     = %d\n", v[2]);
    printf("*(v+2)   = %d\n", *(v + 2));
    printf("v == &v[0]: %s\n", v == &v[0] ? "verdadero" : "falso");
    printf("\nRecorrido con puntero:\n");
    int *p = v;
    for (int i = 0; i < 5; i++) {
        printf("*(p+%d) = %d\n", i, *(p + i));
    }
}

void demo_doble_puntero() {
    printf("\n=== DOBLE PUNTERO ===\n");
    int x = 42;
    int *p  = &x;
    int **pp = &p;
    printf("x   = %d\n", x);
    printf("*p  = %d\n", *p);
    printf("**pp= %d\n", **pp);
    **pp = 99;
    printf("despues de **pp = 99, x = %d\n", x);
}

/* ============ FUNCIONES DE MEMORIA DINAMICA ============ */

void demo_malloc() {
    printf("\n=== MALLOC Y FREE ===\n");
    int n;
    printf("¿Cuantos elementos desea reservar?: ");
    scanf("%d", &n);

    int *v = (int *)malloc(n * sizeof(int));
    if (v == NULL) {
        printf("Error: no se pudo reservar memoria.\n");
        return;
    }

    printf("Ingresa %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("\nValores guardados:\n");
    for (int i = 0; i < n; i++)
        printf("v[%d] = %d\n", i, v[i]);

    free(v);
    printf("Memoria liberada con free.\n");
}

void demo_calloc() {
    printf("\n=== CALLOC ===\n");
    int n;
    printf("¿Cuantos elementos desea reservar?: ");
    scanf("%d", &n);

    int *v = (int *)calloc(n, sizeof(int));
    if (v == NULL) {
        printf("Error: no se pudo reservar memoria.\n");
        return;
    }

    printf("Valores iniciales (calloc inicializa en 0):\n");
    for (int i = 0; i < n; i++)
        printf("v[%d] = %d\n", i, v[i]);

    free(v);
    printf("Memoria liberada con free.\n");
}

void demo_realloc() {
    printf("\n=== REALLOC ===\n");
    int *v = (int *)malloc(3 * sizeof(int));
    if (v == NULL) {
        printf("Error al reservar memoria.\n");
        return;
    }

    v[0] = 10; v[1] = 20; v[2] = 30;

    printf("Arreglo original (3 elementos):\n");
    for (int i = 0; i < 3; i++)
        printf("v[%d] = %d\n", i, v[i]);

    v = (int *)realloc(v, 6 * sizeof(int));
    if (v == NULL) {
        printf("Error al redimensionar memoria.\n");
        return;
    }

    v[3] = 40; v[4] = 50; v[5] = 60;

    printf("\nArreglo ampliado con realloc (6 elementos):\n");
    for (int i = 0; i < 6; i++)
        printf("v[%d] = %d\n", i, v[i]);

    free(v);
    printf("Memoria liberada con free.\n");
}

/* ============ MAIN CON MENU ============ */

int main() {

    int o;

    do {
        printf("\n\n--- MENU: PUNTEROS Y MEMORIA DINAMICA ---");
        printf("\n1. Punteros basicos");
        printf("\n2. Paso por referencia");
        printf("\n3. Arreglos y punteros");
        printf("\n4. Doble puntero");
        printf("\n5. malloc y free");
        printf("\n6. calloc");
        printf("\n7. realloc");
        printf("\n0. Salir");
        printf("\nSeleccione una opcion: ");
        scanf("%d", &o);

        switch(o) {
            case 1: demo_punteros();          break;
            case 2: demo_paso_referencia();   break;
            case 3: demo_arreglos_punteros(); break;
            case 4: demo_doble_puntero();     break;
            case 5: demo_malloc();            break;
            case 6: demo_calloc();            break;
            case 7: demo_realloc();           break;
            case 0: printf("Saliendo...\n");  break;
            default: printf("Opcion no valida.\n");
        }

    } while(o != 0);

    return 0;
}
