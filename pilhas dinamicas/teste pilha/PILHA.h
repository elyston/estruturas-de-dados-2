#include <stdio.h>
#include <stdlib.h>
#define tam 100


typedef struct pilha
{
	char info[tam];
	int topo;
}Pilha;

Pilha* cria();
int Pilha_vazia(Pilha* p);
int Pilha_cheia(Pilha* p);
void empilha(Pilha* p, char letra);
char desempilha(Pilha* p);
void Pilha_mostra(Pilha* p);
void Pilha_libera(Pilha* p);
