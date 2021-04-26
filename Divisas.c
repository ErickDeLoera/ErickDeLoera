#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int opcion;
    float valor;

    printf("Marque con un numero la conversion que desea hacer:");

    printf("\n 1.Convertir de dolar a euro: ");

    printf("\n 2.Convertir de euro a dolar: ");

    printf("\n 3.Convertir de peso a dolar: ");

    printf("\n Seleccione: ");

    scanf("%d", &opcion);

    switch (opcion)

    {

    case 1:

        printf("Ingrese valor (dolar a euro) ");

        scanf("%f", &valor);

        valor = valor * 0.732076;

        printf("El resultado es %f\n", valor);

        break;

    case 2:

        printf("Ingrese valor (euro a dolar) ");

        scanf("%f", &valor);

        valor = valor * 1.36602;

        printf("El resultado es %f\n", valor);

        break;

    case 3:

        printf("Ingrese valor (peso a dolar) ");

        scanf("%f", &valor);

        valor = valor * 0.0815380;

        printf("El resultado es %f\n", valor);

    default:

        printf("Salir");
    }

    return 0;
}
