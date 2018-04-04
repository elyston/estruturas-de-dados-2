#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define tam 100
#include "../funções arvore binaria/ARVBIN.h"

#endif // FILA_H_INCLUDED

typedef struct fila
{
    Arv* arv[100];
    int frente,atras;
}Fila;

Fila* cria();
int Fila_vazia(Fila* f);
int Fila_cheia(Fila* f);
void enfileira(Fila* f, Arv* arv);
Arv* desenfileira(Fila* f);
void Fila_mostra(Fila* f);
void Fila_libera(Fila* f);
