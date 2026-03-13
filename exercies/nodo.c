#include "nodo.h"
#include <stdio.h>
#include <stdlib.h>

/* Ejercicio 1 */
Nodo* crearNodo(int valor) {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    if (nuevo) {
        nuevo->dato = valor;
        nuevo->siguiente = NULL;
    }
    return nuevo;
}

/* Ejercicio 2 */
Nodo* crearArregloNodos(int n) {
    // calloc inicializa los datos en 0
    return (Nodo*)calloc(n, sizeof(Nodo));
}

/* Ejercicio 3 */
Nodo* agregarNodo(Nodo* arreglo, int* n, int valor) {
    (*n)++;
    Nodo* nuevoArreglo = (Nodo*)realloc(arreglo, (*n) * sizeof(Nodo));
    if (nuevoArreglo) {
        nuevoArreglo[(*n) - 1].dato = valor;
        nuevoArreglo[(*n) - 1].siguiente = NULL;
        return nuevoArreglo;
    }
    return arreglo;
}

/* Ejercicio 4 */
void liberarNodos(Nodo* arreglo, int n) {
    free(arreglo);
}

/* Ejercicio 5 */
Nodo* construirTresNodos() {
    Nodo* n1 = crearNodo(10);
    Nodo* n2 = crearNodo(20);
    Nodo* n3 = crearNodo(30);
    if (n1) n1->siguiente = n2;
    if (n2) n2->siguiente = n3;
    return n1;
}

/* Ejercicio 6 */
int contarNodos(Nodo* inicio) {
    int contador = 0;
    Nodo* actual = inicio;
    while (actual != NULL) {
        contador++;
        actual = actual->siguiente;
    }
    return contador;
}

/* Ejercicio 7 */
Nodo* crearNodosPorEntrada() {
    int num, valor;
    printf("¿Cuántos nodos desea crear?: ");
    scanf("%d", &num);

    Nodo* inicio = NULL;
    Nodo* ultimo = NULL;

    for (int i = 0; i < num; i++) {
        printf("Dato para nodo %d: ", i + 1);
        scanf("%d", &valor);
        Nodo* nuevo = crearNodo(valor);
        
        if (inicio == NULL) {
            inicio = nuevo;
        } else {
            ultimo->siguiente = nuevo;
        }
        ultimo = nuevo;
    }
    return inicio;
}
