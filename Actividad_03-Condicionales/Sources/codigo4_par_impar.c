#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Ingresa un numero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("El numero es PAR\n");
    }
    else{
        printf("El numero es IMPAR\n");
    }

    return 0;
}
