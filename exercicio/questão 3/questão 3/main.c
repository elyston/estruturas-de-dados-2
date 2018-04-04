#include "../../../funções arvore binaria/ARVBIN.h"
int conta_nodo(Arv* arv);
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
    printf("numero de nos da arvore = %d\n",conta_nodo(A)-1);
    esvazia_arvore(A);
    return 0;
}

int conta_nodo(Arv* arv)
{

    if(!arvore_vazia(arv))
        return conta_nodo(arv->esq)+conta_nodo(arv->dir);



}
