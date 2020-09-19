#include <stdio.h>
#include <stdlib.h>
#include "Listas.h"
#include "ListasRecursivas.h"
#include "string.h"


//1. Recorrer una lista y mostrarla en forma invertida.
void Recorre_Mostrar_Recursivamente (nodo * lista)
{
    if(lista)
    {
        MostrarNodo(lista);
        Recorre_Mostrar_Recursivamente(lista->siguiente);
    }
}

//2. Sumar los elementos de una lista.
int Sumar_Lista_Recursivamente (nodo * lista)
{
    int suma;

    if(!lista)
    {
        suma = 0;
    }
    else
    {
        suma = lista->dato.edad + Sumar_Lista_Recursivamente(lista->siguiente);
    }

    return suma;
}

//3. Mostrar los elementos de una lista ubicados en una posición par.
void Mostrar_Elementos_Pares_Recursion (nodo * lista)
{
    if(lista)
    {
        if(lista->dato.edad %2 == 0))
        {
            MostrarNodo(lista);
            Mostrar_Elementos_Pares_Recursion(lista->siguiente);
        }
    }
}

// 4. Invertir una lista cambiando los vínculos.
nodo * Invertir_Lista_Recursion (nodo * lista)
{
    if(lista)
    {

    }
}

















