#ifndef FILA_H
#define FILA_H

#include <stdbool.h>

#define MAX 5 // Tamanho máximo da fila

typedef struct {
    int items[MAX];
    int inicio, fim;
} Fila;

void inicializarFila(Fila *f);
bool isEmpty(Fila *f);
bool isFull(Fila *f);
void enqueue(Fila *f, int valor);
void dequeue(Fila *f);
int front(Fila *f);
void imprimirFila(Fila *f);

#endif // fila_h
