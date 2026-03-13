#include <stdio.h>
#include "nodo.h"

int main() {
    printf("===== Repo de ejercicios de nodos =====\n");

    // Ejercicio 1
    Nodo* n1 = crearNodo(10);
    if (n1) printf("Nodo creado con dato: %d\n", n1->dato);

    // Ejercicio 2
    Nodo* arreglo = crearArregloNodos(5);
    printf("Arreglo inicial:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("[%d] ", arreglo[i].dato);
    }
    printf("\n");

    // Ejercicio 3
    int tam = 5;
    arreglo = agregarNodo(arreglo, &tam, 99);
    printf("Arreglo actualizado (con %d elementos):\n", tam);
    for (int i = 0; i < tam; i++) 
    {
        printf("[%d] ", arreglo[i].dato);
    }
    printf("\n");

    // Ejercicio 4
    liberarNodos(arreglo, tam);
    liberarNodos(n1, 1);

    // Ejercicio 5
    Nodo* inicio = construirTresNodos();
    printf("Lista de tres nodos:\n");
    Nodo* temp = inicio;
    while (temp != NULL) 
    {
        printf("%d -> ", temp->dato);
        temp = temp->siguiente;
    }
    printf("NULL\n");

    // Ejercicio 6
    int total = contarNodos(inicio);
    printf("Total de nodos: %d\n", total);

    // Ejercicio 7
    Nodo* desdeEntrada = crearNodosPorEntrada();
    printf("Nodos creados por entrada:\n");
    Nodo* tempEntrada = desdeEntrada;
    while (tempEntrada != NULL) 
    {
        printf("%d -> ", tempEntrada->dato);
        tempEntrada = tempEntrada->siguiente;
    }
    printf("NULL\n");

    return 0;
}
