#include <iostream>
#include<queue>
#include "../../../projetos ED2/teste_arvore binaria/ARVBIN.h"
#include "../../filas dinamicas/FILA.h"
void BFS(Arv* arv);
int main()
{
    Arv *A = criar_NO('a',
                            criar_NO('b',
                                     criar_NO('d',NULL,NULL),
                                     NULL),
                            criar_NO('c',
                                     criar_NO('e',NULL,NULL),
                                     criar_NO('f',NULL,NULL)
                                     )
                            );
	BFS(A);
	esvazia_arvore(A);
    return 0;
}

void BFS(Arv *arv){
	Fila *fila = cria();
	Arv *corrente = NULL;
	enfileira(fila,arv->info);

	while(!Fila_vazia(fila)){
		corrente->info = fila->info[fila->frente];
		printf("%c ",corrente->info);
		desenfileira(fila);
		if(corrente->esq != NULL)
			enfileira(fila,corrente->esq->info);
		if(corrente->dir != NULL)
			enfileira(fila,corrente->dir->info);
	}
	Fila_libera(fila);
}
