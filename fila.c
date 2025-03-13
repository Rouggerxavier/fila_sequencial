#include <stdio.h>
#include "fila.h"

void inicializarFila(Fila *f) {
    f->inicio = -1;
    f->fim = -1;
}

bool isEmpty(Fila *f) {
    return (f->inicio == -1 && f->fim == -1);
}

bool isFull(Fila *f) {
    return ((f->fim + 1) % MAX == f->inicio);
}

void enqueue(Fila *f, int valor) {
    if (isFull(f)) {
        printf("Fila cheia! Não é possível inserir %d.\n", valor);
        return;
    }
    if (isEmpty(f)) {
        f->inicio = 0;
        f->fim = 0;
    } else {
        f->fim = (f->fim + 1) % MAX;
    }
    f->items[f->fim] = valor;
    printf("Inserido %d na fila.\n", valor);
}

void dequeue(Fila *f) {
    if (isEmpty(f)) {
        printf("Fila vazia! Não é possível remover.\n");
        return;
    }
    printf("Removido %d da fila.\n", f->items[f->inicio]);
    if (f->inicio == f->fim) {
        // Último elemento removido
        f->inicio = -1;
        f->fim = -1;
    } else {
        f->inicio = (f->inicio + 1) % MAX;
    }
}

int front(Fila *f) {
    if (isEmpty(f)) {
        printf("Fila vazia! Não há elemento no início.\n");
        return -1;
    }
    return f->items[f->inicio];
}

void imprimirFila(Fila *f) {
    if (isEmpty(f)) {
        printf("Fila vazia!\n");
        return;
    }
    printf("Fila: ");
    int i = f->inicio;
    while (i != f->fim) {
        printf("%d ", f->items[i]);
        i = (i + 1) % MAX;
    }
    printf("%d\n", f->items[i]);
}