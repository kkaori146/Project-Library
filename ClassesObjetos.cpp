#include <iostream>

using namespace std;

#include "Livro.h"
#include "Revista.h"

int main()
{
	Livro *meuLivro;
	meuLivro = new Livro();

	cout << "\nRevistas" << endl;
	
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
	unsigned int ano;
	unsigned int mes;

	codigo = 2;
	strcpy(titulo, "Moby-Dick (2)");
	strcpy(editora, "Richard Bentley");
	paginas = 635;
	strcpy(isbn, "978-85-7503-670-9");

	Livro *livroMobyDick;

	livroMobyDick = new Livro(codigo, titulo, editora, paginas, isbn);

	cout << endl;
	cout << "(livroMobyDick) Codigo: " << livroMobyDick->codigo << endl;
	cout << "(livroMobyDick) Titulo: " << livroMobyDick->titulo << endl;
	cout << "(livroMobyDick) Editora: " << livroMobyDick->editora << endl;
	cout << "(livroMobyDick) Paginas: " << livroMobyDick->paginas << endl;
	cout << "(livroMobyDick) ISBN: " << livroMobyDick->isbn << endl;

	delete livroMobyDick;
	
	cout << "\nRevistas" << endl;

	Revista* minhaRevista;
	minhaRevista = new Revista();

	minhaRevista->codigo = 1;
	strcpy(minhaRevista->titulo, "Pets");

	cout << "(minhaRevista) Codigo: " << minhaRevista->codigo << endl;
	cout << "(minhaRevista) Titulo: " << minhaRevista->titulo << endl;

	delete minhaRevista;//Liberar espaço de memória após a consulta



	codigo = 2;
	strcpy(titulo, "Nature (2)");
	strcpy(editora, "Celtic");
	paginas = 15;
	ano = 1984;
	mes = 04;

	Revista *revistaNature;

	revistaNature = new Revista(codigo, titulo, editora, paginas, ano, mes);

	cout << endl;
	cout << "(revistaNature) Codigo: " << revistaNature->codigo << endl;
	cout << "(revistaNature) Titulo: " << revistaNature->titulo << endl;
	cout << "(revistaNature) Editora: " << revistaNature->editora << endl;
	cout << "(revistaNature) Paginas: " << revistaNature->paginas << endl;
	cout << "(revistaNature) Ano: " << revistaNature->ano << endl;
	cout << "(revistaNature) Mes: " << revistaNature->mes << endl;

	delete revistaNature;


	system("PAUSE");

	return 0;
}