#include "AbstractSort.h"
#include <stdlib.h>

//NÃO modifique este arquivo!!

int swapsCount = 0;

void swap(int indiceDeUmElemento, int indiceDeOutroElemento, Elemento** umVetor){
    swapsCount++;
    Elemento* tmp = umVetor[indiceDeUmElemento];
    umVetor[indiceDeUmElemento] = umVetor[indiceDeOutroElemento];
    umVetor[indiceDeOutroElemento] = tmp;
}

int getSwapsCount(){
    int ret = swapsCount;
    swapsCount = 0;
    return ret;
}

Elemento** inicializa(int QuantidadeDeElementos){
    Elemento** umVetor = (Elemento**)calloc(QuantidadeDeElementos,sizeof(Elemento*));
    return umVetor;
}

void destroi(Elemento** umVetor, int quantidadeDeElementos){
    //for(int i=0 ; i < quantidadeDeElementos; i++){
    //    free(umVetor[i]);
    //}

    free(umVetor);
}