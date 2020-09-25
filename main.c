#include <stdio.h>
#include <stdlib.h>
#include "string.h"

#include "Listas.h"
#include "Persona.h"
#include "ListasRecursivas.h"


int main()
{
    nodo * lista = IncioLista();

    persona per1={"nicolas", 20};
    persona per2={"martina", 21};
    persona per3={"josefina", 12};
    persona per4={"agusto", 29};
    persona per5={"elber", 23};
    persona per6={"robert", 50};
    persona per7={"nacho", 10};

    lista = AgregarPricipio(lista, CrearNodo(per1));
    lista = AgregarPricipio(lista, CrearNodo(per2));
    lista = AgregarPricipio(lista, CrearNodo(per3));
    lista = AgregarPricipio(lista, CrearNodo(per4));
    lista = AgregarPricipio(lista, CrearNodo(per5));
    lista = AgregarPricipio(lista, CrearNodo(per6));
    lista = AgregarPricipio(lista, CrearNodo(per7));


   printf("Lista \n ");
   printf("\n--------------------------------------------------------------------\n");

   Recorre_Mostrar_Recursivamente(lista);

   printf("\n--------------------------------------------------------------------\n");

   int suma = Sumar_Lista_Recursivamente(lista);
   printf("\n La suma de todos los elementos de la lista es: %d", suma);

   printf("\n--------------------------------------------------------------------\n");

   Mostrar_Elementos_Pares_Recursion(lista);

   printf("\n--------------------------------------------------------------------\n");

    printf("listas recursivas invertida: \n");

    nodo * invertidoRecursivo = IncioLista();

    invertidoRecursivo = Invertir_Lista_Recursion(lista);

//    Recorre_Mostrar_Recursivamente(invertidoRecursivo);
    MostrarLista(invertidoRecursivo);

    printf("\n--------------------------------------------------------------------\n");

    return 0;
}
