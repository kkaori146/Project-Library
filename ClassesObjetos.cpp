#include <iostream>

using namespace std;

#include "Livro.h"
#include "Revista.h"
#include "CD.h"
#include "DVD.h"

int main()
{
	cout << "\nLibrary" << endl;

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

	codigo = 2;
	strcpy(titulo, "Crazy");
	strcpy(editora, "LunaLua");
	paginas = 15;
	ano = 2021;
	mes = 04;


	Revista *revista;
	revista = new Revista(codigo, titulo, editora, paginas, ano, mes);

	cout << endl;
	cout << "(revista) Codigo: "<< revista->getCodigo() << endl;
	cout << "(revista) Titulo: "<< revista->getTitulo() << endl;
	cout << "(revista) Editora: "<< revista->getEditora() << endl;
	cout << "(revista) Paginas: " << revista->getPaginas() << endl;
	cout << "(revista) Ano: " << revista->getAno() << endl;
	cout << "(revista) Mes: " << revista->getMes() << endl;

	delete revista;


	codigo = 3;
	strcpy(titulo, "Twinkle");
	discos = 2;
	duracao = 1;
	faixas = 15;
	
	CD *cd;
	cd = new CD(codigo, titulo, discos, duracao, faixas);

	cout << endl;
	cout << "(cd) Codigo: " << cd->getCodigo() << endl;
	cout << "(cd) Titulo: " << cd->getTitulo() << endl;
	cout << "(cd) Discos: " << cd->getDiscos() << endl;
	cout << "(cd) Duracao: " << cd->getDuracao() << endl;
	cout << "(cd) Faixas: " << cd->getFaixas() << endl;

	delete cd;

	codigo = 4;
	strcpy(titulo, "Primavera");
	discos = 3;
	duracao = 3;
	regiao = 4;
	strcpy(legendas, "PT, JP, EN");

	DVD *dvd;
	dvd = new DVD(codigo, titulo, discos, duracao, regiao, legendas);

	cout << endl;
	cout << "(dvd) Codigo: " << dvd->getCodigo() << endl;
	cout << "(dvd) Titulo: " << dvd->getTitulo() << endl;
	cout << "(dvd) Discos: " << dvd->getDiscos() << endl;
	cout << "(dvd) Duracao: " << dvd->getDuracao() << endl;
	cout << "(dvd) Regiao: " << dvd->getRegiao() << endl;
	cout << "(dvd) Legendas: " << dvd->getLegendas() << endl;

	delete dvd;


	system("PAUSE");

	return 0;
}