#include "FILA.h"

Fila* cria()
{
    Fila *F = (Fila*)malloc(sizeof(Fila));
    F->frente = F->atras = 0;
    return F;
}
int Fila_vazia(Fila* f)
{
    return f->frente == f->atras && f->atras == tam;
}
int Fila_cheia(Fila* f)
{
    return f->atras == tam;
}
void enfileira(Fila* f, Arv* arv)
{
    if(Fila_cheia(f))
        printf("fila cheia\n");
    else
    {
        f->arv[f->atras] = arv;
        f->atras++;
    }
}
Arv* desenfileira(Fila* f)
{
    Arv* aux;
    if(Fila_vazia(f))
        printf("fila vazia\n");
    else
    {
        aux = f->arv[f->frente];
        f->frente++;
    }
    return aux;
}
//void Fila_mostra(Fila* f)
//{
//    int i;
//    for(i = f->frente; i < f->atras; i++)
//        printf("%c ",f->info[i]);
//    printf("\n");
//}
void Fila_libera(Fila* f)
{
    free(f);
}
