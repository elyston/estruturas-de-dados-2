#include "ARVBIN.h"

Arv* criar(){
	return NULL;
}

int arvore_vazia(Arv* T){
	return T==NULL;
}

Arv* criar_NO(char valor, Arv* esq, Arv* dir){
	Arv *p=(Arv*)malloc(sizeof(Arv));
	p->info = valor;
	p->esq = esq;
	p->dir = dir;
	return p;
}

int busca_arvore(Arv* T, char dado){
	if(arvore_vazia(T))
        return 0;
	else
		return T->info == dado || busca_arvore(T->esq,dado) || busca_arvore(T->dir,dado);

}

void esvazia_arvore(Arv* T){
	if(!arvore_vazia(T)){
		esvazia_arvore(T->esq);
		esvazia_arvore(T->dir);
		free(T);
	}
}

void exibe_arvore_preORDEM(Arv* T){
	printf(" <");
	if(!arvore_vazia(T)){
		printf("%c",T->info);
		exibe_arvore_preORDEM(T->esq);
		exibe_arvore_preORDEM(T->dir);
	}
	else
        printf("V");
	printf("> ");
}

void exibe_arvore_inORDEM(Arv* T){
	printf(" <");
	if(!arvore_vazia(T)){
		exibe_arvore_inORDEM(T->esq);
		printf("%c",T->info);
		exibe_arvore_inORDEM(T->dir);
	}
	else
        printf("V");
	printf("> ");
}

void exibe_arvore_posORDEM(Arv* T){
	printf(" <");
	if(!arvore_vazia(T)){
		exibe_arvore_posORDEM(T->esq);
		exibe_arvore_posORDEM(T->dir);
		printf("%c",T->info);
	}
	else
        printf("V");
	printf("> ");
}

void menu_impressao(int op, Arv* T)
{
    switch(op)
    {
        case 1: exibe_arvore_preORDEM(T);   break;
        case 2: exibe_arvore_inORDEM(T);    break;
        case 3: exibe_arvore_posORDEM(T);   break;
    }
}

