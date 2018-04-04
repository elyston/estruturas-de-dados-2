#include "../../funções arvore binaria/ARVBIN.h"

void verifica_arvore(Arv* arv);
int main()
{
    setlocale(LC_ALL,"portuguese");
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
  verifica_arvore(A);

  esvazia_arvore(A);
  return 0;
}

void verifica_arvore(Arv* arv)
{
    if(arvore_vazia(arv)  || (!arvore_vazia(arv->esq) && !arvore_vazia(arv->dir)))
       {
           printf("o nodo %c é estritamente binario\n",arv->info);
           verifica_arvore(arv->esq);
           //printf("o nodo %c é estritamente binario\n",arv->info);
           verifica_arvore(arv->dir);
           //printf("o nodo %c é estritamente binario\n",arv->info);
       }
    if(arvore_vazia(arv->esq) && arvore_vazia(arv->dir))
        printf("o nodo %c é estritamente binario\n",arv->info);


}

