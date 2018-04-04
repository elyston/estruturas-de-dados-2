#include<stdio.h>
#include<locale.h>

typedef struct arv{
	struct arv* esq;
	char info;
	struct arv* dir;
}Arv;

Arv* criar();
Arv* criar_NO(char valor, Arv* esq, Arv* dir);
int arvore_vazia(Arv* T);
void exibe_arvore_preORDEM(Arv* T);
void exibe_arvore_inORDEM(Arv* T);
void exibe_arvore_posORDEM(Arv* T);
void menu_impressao(int op, Arv* T);
void esvazia_arvore(Arv* T);
int busca_arvore(Arv* T, char dado);
