#include "../../funções arvore binaria/ARVBIN.h"
int conta_folhas(Arv* arv);

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
    printf("numero de folhas = %d\n",conta_folhas(A));
    esvazia_arvore(A);
    return 0;
}

int conta_folhas(Arv* arv)
{

    if(arvore_vazia(arv))
        return 0;
    if(arv->esq == NULL && arv->dir == NULL)
        return 1;
    return conta_folhas(arv->esq)+conta_folhas(arv->dir);


}


