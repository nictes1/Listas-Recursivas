#include <stdio.h>
#include <stdlib.h>
#include "Listas.h"
#include "ListasRecursivas.h"
#include "string.h"


//1. Recorrer una lista y mostrarla en forma invertida.
void Mostrar_Lista_Recursivamente (nodo * lista)
{
    if(lista)
    {
        MostrarNodo(lista);
        Mostrar_Lista_Recursivamente(lista->siguiente);
    }
}

void Mostrar_Lista_Recursivamente_Invertido(nodo * lista)
{
    if(lista)
    {
        Mostrar_Lista_Recursivamente_Invertido(lista->siguiente);
        MostrarNodo(lista);
    }
}

//2. Sumar los elementos de una lista.
int Sumar_Lista_Recursivamente (nodo * lista)
{
    int suma;

    if(lista!=NULL)
    {
        suma = lista->dato.edad + Sumar_Lista_Recursivamente(lista->siguiente);
    }
    else
    {
        suma=0;
    }

    return suma;
}

int Suma_recursiva_otro (nodo * lista)
{
    return (lista)?lista->dato.edad+Suma_recursiva_otro(lista->siguiente):0;
}

//3. Mostrar los elementos de una lista ubicados en una posición par.
void Mostrar_Elementos_Pares_Recursion (nodo * lista)  ///Arranca de 1
{

    nodo * aux = lista;

    if(aux)
    {
        MostrarNodo(aux);
        aux = aux->siguiente;
        if(aux)
        {
            Mostrar_Elementos_Pares_Recursion(aux->siguiente);
        }
    }
}

// 4. Invertir una lista cambiando los vínculos.

nodo * Invertir_Lista_Recursion (nodo * lista)
{
    nodo * aux = NULL;

    if(lista)
    {
        aux = lista;

        lista = lista->siguiente;

        aux->siguiente = NULL;

        lista = AgregarFinal(Invertir_Lista_Recursion(lista),aux);
    }
    return lista;
}


//5. Borrar un nodo recursivo
nodo * Borrar_Nodo_Lista (nodo * lista, int dato)
{
    nodo * aux;

    if(lista)
    {
        if(lista->dato.edad == dato)
        {
            aux = lista;
            lista = lista->siguiente;
            free(aux);
        }
        else
        {
            lista->siguiente=Borrar_Nodo_Lista(lista->siguiente,dato);
        }
    }
    return lista;
}

//6. Insertar un nodo en una lista en forma recursiva
nodo * Insertar_Nodo_Recursivo_Orden(nodo * lista, nodo * nuevo)
{
    if(!lista)
    {
       lista=nuevo;
    }
    else
    {
        if(lista->dato.edad > nuevo->dato.edad)
        {
            nuevo->siguiente = lista;
            lista = nuevo;
        }
        else
        {
            lista->siguiente = Insertar_Nodo_Recursivo_Orden (lista->siguiente, nuevo);
        }
    }

    return lista;
}















