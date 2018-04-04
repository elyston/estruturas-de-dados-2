#include "FILA.h"

int main()
{
    Fila *fi;
    fi = cria();
    enfileira(fi, 'a');
    enfileira(fi, 'b');
    enfileira(fi, 'c');
    Fila_mostra(fi);
    desenfileira(fi);
    Fila_mostra(fi);
    Fila_libera(fi);
    return 0;
}
