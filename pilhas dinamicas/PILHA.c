#include "PILHA.h"

Pilha* cria(){
	Pilha *P = (Pilha*)malloc(sizeof(Pilha));
	P->topo = 0;
	return P;
}

int Pilha_vazia(Pilha* p){
	return p->topo == 0;
}

int Pilha_cheia(Pilha* p){
	return p->topo == tam;
}

void empilha(Pilha* p, char letra){
	if(Pilha_cheia(p))
		printf("pilha cheia\n");
	else
	{
		p->info[p->topo]=letra;
		p->topo++;
	}
}

char desempilha(Pilha* p){
	char letra;
	if(Pilha_vazia(p))
		printf("pilha vazia\n");
	else
	{
		letra = p->info[p->topo];
		p->topo--;
	}
	return letra;
}

void Pilha_mostra(Pilha* p){
	int i;
	for(i = 0; i < p->topo; i++)
	{
		printf("%c ",p->info[i]);
	}
	printf("\n");
}

void Pilha_libera(Pilha* p){
	free(p);
}