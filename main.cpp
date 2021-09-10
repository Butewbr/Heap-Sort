#include "AbstractSort.h"
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	Elemento e0, e1, e2, e3, e4;
  e0._chave = 1;
  e1._chave = 2;
  e2._chave = 0;
  e3._chave = 4;
  e4._chave = 12;

  Elemento** vetor = inicializa(3);
  vetor[0] = &e0;
  vetor[1] = &e1;
  vetor[2] = &e2;
  vetor[3] = &e3;
  vetor[4] = &e4;

  for (int i = 0; i < 5; ++i)
  {
  	cout << vetor[i]->_chave << endl;
  }
  construirHeapMax(vetor, 5);

  sort(vetor, 5);

  for (int i = 0; i < 5; ++i)
  {
  	cout << vetor[i]->_chave << endl;
  }

  free(vetor);

	return 0;
}