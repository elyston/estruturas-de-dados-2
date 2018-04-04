#include "../../funções arvore binaria/ARVBIN.h"
void verifica_arvbinaria_completa(Arv* arv);
int maior(int a, int b);
int altura(Arv* arv);
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
    printf("imprime pre-ordem\n");
    menu_impressao(1,A);    printf("\n");
    printf("imprime in-ordem\n");
    menu_impressao(2,A);    printf("\n");
    printf("imprime pos-ordem\n");
    menu_impressao(3,A);    printf("\n");
    verifica_arvbinaria_completa(A);
    esvazia_arvore(A);

    return 0;
}

void verifica_arvbinaria_completa(Arv* arv)
{
    if(altura(arv->esq) == altura(arv->esq))
        printf("esta árvore está completa\n");
    else
        printf("esta árvore não está completa\n");
}
int maior(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}//maior

int altura(Arv* arv){
   if((arv == NULL) || (arv->esq == NULL && arv->dir == NULL))
       return 0;
   else
       return 1 + maior(altura(arv->esq), altura(arv->dir));
}
