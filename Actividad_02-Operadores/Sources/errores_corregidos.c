#include <stdio.h>

int main(){
    //Ejercicio 1:

    int a = 3;
    int b = 4;
    int c = a++ + --b;

    printf("%d %d %d\n", a, b, c);

    //Ejercicio 2:

    int x = 10;
    int y = 3;

    printf("%d\n", x + y * 2);
    printf("%d\n", (x + y) * 2);

    //Ejercicio 3:

    int i = 5;

    printf("%d\n", i++);
    printf("%d\n", ++i);

    //Ejercicio 4:

    int g = 5, h = 2;

    float r = (float)g / h;  // CORRECCIÓN: cast a float para division correcta
    printf("%.2f\n", r);

    //Ejercicio 5:

    int j = 5; // 1-se cambia el identificador de la variable
    int k = 3; // 2-se cambia el identificador de la variable

    if(j > k){ // 3-se agregaron llaves
        printf("j es mayor"); // 4-se cambia el identificador de la variable
    }
    else{ // 5-se agregaron llaves
        printf("k es mayor"); // 6-se cambia el identificador de la variable
    }

    printf("\nfin"); // 7-se separo para que "fin" se imprima despues

    return 0;
}
