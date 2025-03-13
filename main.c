#include "fila.h"

int main() {
    Fila f;
    inicializarFila(&f);

    enqueue(&f, 10);
    enqueue(&f, 20);
    enqueue(&f, 30);
    enqueue(&f, 40);
    enqueue(&f, 50);
    enqueue(&f, 60); // Fila cheia, não será inserido

    imprimirFila(&f);

    printf("Início da fila: %d\n", front(&f));

    dequeue(&f);
    dequeue(&f);

    imprimirFila(&f);

    enqueue(&f, 60);
    enqueue(&f, 70);

    imprimirFila(&f);

    printf("Início da fila: %d\n", front(&f));

    return 0;
}