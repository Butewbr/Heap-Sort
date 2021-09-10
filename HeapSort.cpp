#include "AbstractSort.h"
#include <vector>
#include <iostream>

using namespace std;

//implemente AQUI as funcoes sort e max_heapify do HeapSort
//você DEVE utilizar a função swap para trocar dois elementos de posição

void sort(Elemento** umVetor, int quantidadeDeElmentos)
{
	construirHeapMax(umVetor, quantidadeDeElmentos);

	while(quantidadeDeElmentos-1 > 0)
	{
		swap(quantidadeDeElmentos-1, 0, umVetor);
		
		max_heapify(umVetor, quantidadeDeElmentos-1, 0);

		quantidadeDeElmentos = quantidadeDeElmentos-1;
	}
}

void max_heapify(Elemento ** umVetor, int quantidadeDeElementos, int i)
{
	if (i >= quantidadeDeElementos or i < 0)
	{
		throw posicao_invalida_exception();
	}

	int l = i*2+1;
	int r = i*2+2;
	int max = i;

	if (l < quantidadeDeElementos and umVetor[l]->_chave > umVetor[max]->_chave)
	{
		max = l;
	}

	if (r < quantidadeDeElementos and umVetor[r]->_chave > umVetor[max]->_chave)
	{
		max = r;
	}

	if (max != i)
	{
		swap(max, i, umVetor);

		max_heapify(umVetor, quantidadeDeElementos, max);
	}
}

void construirHeapMax(Elemento ** umVetor, int tamanho)
{
    int i = (tamanho/2) - 1;

    while(i >= 0)
    {
    	max_heapify(umVetor, tamanho, i);

    	i--;
    }
}