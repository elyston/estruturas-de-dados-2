#include "PILHA.h"

int main()
{
    Pilha *pi = cria();
    empilha(pi,'a');
    empilha(pi,'b');
    empilha(pi,'c');
    Pilha_mostra(pi);
    Pilha_libera(pi);
    return 0;
}