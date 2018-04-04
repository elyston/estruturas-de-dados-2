#include "../../funções arvore binaria/ARVBIN.h"

Arv* espelhar(Arv* arv);

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
    Arv* B = espelhar(A);
    printf("impressão pre-ordem\n");
    menu_impressao(1,A); printf("\n");
    printf("impressão in-ordem\n");
    menu_impressao(2,A); printf("\n");
    printf("impressão pos-ordem\n");
    menu_impressao(3,A); printf("\n");

    printf("\n\narvore invertida\n");
    printf("impressão pre-ordem\n");
    menu_impressao(1,B); printf("\n");
    printf("impressão in-ordem\n");
    menu_impressao(2,B); printf("\n");
    printf("impressão pos-ordem\n");
    menu_impressao(3,B); printf("\n");

    esvazia_arvore(A);
    esvazia_arvore(B);
    return 0;
}

Arv* espelhar(Arv* arv)
{
    if(arv==NULL)
        return NULL;
    Arv* novo;
    novo = espelhar(arv->esq);
    arv->esq = espelhar(arv->dir);
    arv->dir = novo;
    return arv;
}

