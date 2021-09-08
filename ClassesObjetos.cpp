#include <iostream>

using namespace std;

#include "Livro.h"

int main()
{
	Livro *meuLivro;
	meuLivro = new Livro();
	
		meuLivro->codigo = 1;
		strcpy(meuLivro->titulo, "The Little Prince");

		cout << "(meuLivro) Codigo: " << meuLivro->codigo << endl;
		cout << "(meuLivro) Titulo: " << meuLivro->titulo << endl;

		delete meuLivro;//Liberar espaço de memória após a consulta
	
	unsigned int codigo;
	char titulo[100];
	char editora[60];
	unsigned int paginas;
	char isbn[20];

	codigo = 2;
	strcpy(titulo, "Moby-Dick (2)");
	strcpy(editora, "Richard Bentley");
	paginas = 635;
	strcpy(isbn, "9788575036709");

	Livro *livroMobyDick;

	livroMobyDick = new Livro(codigo, titulo, editora, paginas, isbn);

	cout << endl;
	cout << "(livroMobyDick) Codigo: " << livroMobyDick->codigo << endl;
	cout << "(livroMobyDick) Titulo: " << livroMobyDick->titulo << endl;
	cout << "(livroMobyDick) Editora: " << livroMobyDick->editora << endl;
	cout << "(livroMobyDick) Paginas: " << livroMobyDick->paginas << endl;
	cout << "(livroMobyDick) ISBN: " << livroMobyDick->isbn << endl;

	delete livroMobyDick;

	system("PAUSE");

	return 0;
}