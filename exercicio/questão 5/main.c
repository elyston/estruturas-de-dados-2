#include "../../funções arvore binaria/ARVBIN.h"
#include "../../pilhas dinamicas/teste pilha/PILHA.h"
void percurso_IN_ordem_iterativo(Pilha* p, Arv* arv);
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

void percurso_IN_ordem_iterativo(Pilha* p, Arv* arv)
{
    if(!arvore_vazia(arv))
    {
         percurso_IN_ordem_iterativo(p,arv->esq);
         empilha(p,arv->info);
         percurso_IN_ordem_iterativo(p,arv->dir);
    }
}

void realizar_impressao(Arv* arv)
{
    Pilha* P = cria();
    empilha(P,arv->info);
    while(!Pilha_vazia(P))
    {
        printf("%c ",desempilha(P));
        percurso_IN_ordem_iterativo(P,arv);
    }
    Pilha_libera(P);
}
