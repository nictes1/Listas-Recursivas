#include <stdio.h>
#include <stdlib.h>

#include "Persona.h"
#include "Listas.h"

//cuerpo de las funciones de personas


void mostrarPersonas (persona dato)
{
    printf("Nombre: %s \n", dato.nombre);
    printf("  Edad: %d \n", dato.edad);
}

void CargarPerons(persona personaOB)
{
    char control='s';

    printf("\n Carga de personas");

    while(control!='s')
    {
        printf("\nNombre: ");
        fflush(stdin);
        scanf("%c", personaOB.nombre);
        printf("\n  Edad: ");
        scanf("%d", &personaOB.edad);

        printf("\n Desea agregar mas personas?");
        printf("\n [S] --> Continuar");
        printf("\n [N] --> No Continuar");
    }
}