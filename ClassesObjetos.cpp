#include <iostream>

using namespace std;

#include "Livro.h"
#include "Revista.h"
#include "CD.h"
#include "DVD.h"

int main()
{
	cout << "\nLivros" << endl;

	unsigned int codigo;
	char titulo[100];
	char editora[60];
	unsigned int paginas;
	char isbn[20];
	unsigned int ano;
	unsigned int mes;
	unsigned int discos;
	unsigned int duracao;
	unsigned int faixas;
	unsigned int regiao;
	char legendas[50];

	codigo = 1;
	strcpy(titulo, "Moby-Dick ");
	strcpy(editora, "Richard Bentley");
	paginas = 635;
	strcpy(isbn, "978-85-7503-670-9");

	Livro *livro;
	livro = new Livro(codigo, titulo, editora, paginas, isbn);

	cout << endl;
	cout << "(livro) Codigo: " << livro->getCodigo() << endl;
	cout << "(livro) Titulo: " << livro->getTitulo() << endl;
	cout << "(livro) Editora: " << livro->getEditora() << endl;
	cout << "(livro) Paginas: " << livro->getPaginas() << endl;
	cout << "(livro) ISBN: " << livro->getIsbn() << endl;

	delete livro;
	

	system("PAUSE");

	return 0;
}