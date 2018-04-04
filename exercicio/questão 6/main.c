#include "../../funções arvore binaria/ARVBIN.h"
#include "../../pilhas dinamicas/teste pilha/PILHA.h"
void percurso_POS_ordem_iterativo(Pilha* p, Arv* arv);
void realizar_impressao(Arv* arv);
int main()
{
    Arv *A = criar_NO('a',
                      criar_NO('b',
                               NULL,
                               criar_NO('d',NULL,NULL)
                               ),
                      criar_NO('c',
                               criar_NO('e',NULL,NULL),
                               criar_NO('f',NULL,NULL)
                               )
                      );
    menu_impressao(1,A); printf("\n");
    menu_impressao(2,A); printf("\n");
    menu_impressao(3,A); printf("\n");

    printf("\n\npilha: ");
    realizar_impressao(A);
    esvazia_arvore(A);
    return 0;
}

void percurso_POS_ordem_iterativo(Pilha* p, Arv* arv)
{
    if(!arvore_vazia(arv))
    {
         percurso_POS_ordem_iterativo(p,arv->esq);
         percurso_POS_ordem_iterativo(p,arv->dir);
         empilha(p,arv->info);
    }
}

void realizar_impressao(Arv* arv)
{
    Pilha* P = cria();
    Pilha* Q = cria();
    char aux;
    empilha(P,arv->info);
    while(!Pilha_vazia(P))
    {
        aux = desempilha(P);
        empilha(Q,aux);
        printf("%c ",aux);
        percurso_POS_ordem_iterativo(P,arv);
    }
    Pilha_mostra(Q);
    Pilha_libera(P);
    Pilha_libera(Q);
}
