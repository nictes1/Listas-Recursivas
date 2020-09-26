#ifndef LISTASRECURSIVAS_H_INCLUDED
#define LISTASRECURSIVAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>

#include "Listas.h"
#include "Persona.h"

void Mostrar_Lista_Recursivamente (nodo * lista);
void Mostrar_Lista_Recursivamente_Invertido(nodo * lista);
int Sumar_Lista_Recursivamente (nodo * lista);
int Suma_recursiva_otro (nodo * lista);
void Mostrar_Elementos_Pares_Recursion (nodo * lista);
nodo * Invertir_Lista_Recursion (nodo * lista);
nodo * Borrar_Nodo_Lista (nodo * lista, int dato);

#endif // LISTASRECURSIVAS_H_INCLUDED
