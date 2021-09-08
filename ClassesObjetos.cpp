#include <iostream>

using namespace std;

#include "Livro.h"

int main()
{
	cout << "\nClasses e Objetos" << endl;

	Livro *meuLivro;
	meuLivro = new Livro();

	cout << "(meuLivro) Codigo:" << meuLivro->codigo << endl;
	cout << "(meuLivro) Titulo:" << meuLivro->titulo << endl;

	system("PAUSE");

	return 0;
}