#include <iostream>

using namespace std;

#include "Livro.h"

int main()
{
	cout << "\nClasses e Objetos" << endl;

	Livro *meuLivro;
	meuLivro = new Livro();

	meuLivro->codigo = 1;
	strcpy(meuLivro->titulo, "The Little Prince");

	cout << "(meuLivro) Codigo:" << meuLivro->codigo << endl;
	cout << "(meuLivro) Titulo:" << meuLivro->titulo << endl;

	delete meuLivro;//Liberar espaço de memória após a consulta

	system("PAUSE");

	return 0;
}