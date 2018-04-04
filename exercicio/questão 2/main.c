#include "../../filas dinamicas/FILA.h"

void largura(Arv* T);

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
    largura(A);
    esvazia_arvore(A);
    return 0;
}

void largura(Arv* T)
{
    Arv *aux = NULL;
    Fila *F = cria();
    enfileira(F,T);
    while(!Fila_vazia(F))
    {
        aux = F->arv[F->frente];
        printf("%c = ",aux->info);
        desenfileira(F);
        if(T!=NULL)
        {
            if(T->esq!=NULL)
                enfileira(F,T->esq);
            if(T->dir!=NULL)
                enfileira(F,T->dir);
        }

    }
    Fila_libera(F);
}


