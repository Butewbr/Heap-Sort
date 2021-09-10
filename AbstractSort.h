#ifndef ABSTRACTSORT_H
#define ABSTRACTSORT_H
#include <exception>

class posicao_invalida_exception : public std::exception
{
	virtual const char* what() const throw()
  	{
    	return "Posicao invalida na heap";
  	}
} ; 

typedef struct Elemento
{
	int _chave;
	void* _dado;
} Elemento;

int getSwapsCount();
void swap(int indiceDeUmElemento, int indiceDeOutroElemento, Elemento** umVetor);
void sort(Elemento** umVetor, int quantidadeDeElmentos);
Elemento** inicializa(int quantidadeDeElementos);
void destroi(Elemento** umVetor, int quantidadeDeElementos);
void max_heapify(Elemento ** umVetor, int quantidadeDeElementos, int i);
void construirHeapMax(Elemento ** umVetor, int tamanho);

#endif /* ABSTRACTSORT_H */
