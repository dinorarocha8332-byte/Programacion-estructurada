#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumno {
    char nombre[50];
    float calificacion;
    int derechoexamen;
    int actividadrealizada;
};

struct listaAlumnos {
    struct alumno lista[50];
    int total;
};

void capturarDatos(struct listaAlumnos *grupo) {

    printf("\n¿Cuantos alumnos desea ingresar?: ");
    scanf("%d", &grupo->total);
    getchar();

    for (int i = 0; i < grupo->total; i++) {

        printf("\nAlumno %d\n", i + 1);

        printf("Nombre: ");
        fgets(grupo->lista[i].nombre, 50, stdin);
        grupo->lista[i].nombre[strcspn(grupo->lista[i].nombre, "\n")] = 0;

        printf("Calificacion: ");
        scanf("%f", &grupo->lista[i].calificacion);

        printf("Derecho a examen (1: Si, 0: No): ");
        scanf("%d", &grupo->lista[i].derechoexamen);

        printf("Actividad realizada (1: Si, 0: No): ");
        scanf("%d", &grupo->lista[i].actividadrealizada);

        getchar();
    }
}

void mostrarDatos(struct listaAlumnos grupo) {

    if (grupo.total == 0) {
        printf("\nNo hay datos registrados.\n");
        return;
    }

    printf("\n%-30s %-10s %-10s %-10s\n", "Nombre", "Cal.", "Examen", "Actividad");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i < grupo.total; i++) {
        printf("%-30s %-10.2f %-10s %-10s\n",
            grupo.lista[i].nombre,
            grupo.lista[i].calificacion,
            grupo.lista[i].derechoexamen     ? "Si" : "No",
            grupo.lista[i].actividadrealizada ? "Si" : "No");
    }
}

void guardarDatos(struct listaAlumnos grupo) {

    if (grupo.total == 0) {
        printf("\nNo hay datos para guardar.\n");
        return;
    }

    FILE *archivo = fopen("alumnos.txt", "w");

    if (archivo == NULL) {
        printf("\nError al crear el archivo.\n");
        return;
    }

    fprintf(archivo, "%-30s %-10s %-10s %-10s\n", "Nombre", "Cal.", "Examen", "Actividad");
    fprintf(archivo, "------------------------------------------------------------\n");

    for (int i = 0; i < grupo.total; i++) {
        fprintf(archivo, "%-30s %-10.2f %-10s %-10s\n",
            grupo.lista[i].nombre,
            grupo.lista[i].calificacion,
            grupo.lista[i].derechoexamen     ? "Si" : "No",
            grupo.lista[i].actividadrealizada ? "Si" : "No");
    }

    fclose(archivo);
    printf("\nDatos guardados correctamente en 'alumnos.txt'\n");
}

int main() {

    struct listaAlumnos misAlumnos;
    misAlumnos.total = 0;

    int o;

    printf("---------- Base de Datos de Alumnos ----------\n");

    do {
        printf("\n1. Capturar datos de los alumnos\n");
        printf("2. Mostrar datos de los alumnos\n");
        printf("3. Guardar datos en un archivo\n");
        printf("0. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &o);

        switch (o) {

            case 1:
                capturarDatos(&misAlumnos);
                break;

            case 2:
                mostrarDatos(misAlumnos);
                break;

            case 3:
                guardarDatos(misAlumnos);
                break;

            case 0:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion no valida.\n");
        }

    } while (o != 0);

    return 0;
}
